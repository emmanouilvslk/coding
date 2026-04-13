#include <stdio.h>
#include <stdlib.h>

void myprint();

void myprint() {
      printf("Hello World\n"); 
  }

  int main() {

    void(*ptr)() = myprint;
    printf("Pointer: %p\n", ptr);

    long array [11];
    int i;
    long* ptr_long;

    ptr_long = array;
    int count = 0;

    myprint();

    for (i = 10; i != 0; i = i + -1) {
      *ptr_long = 0;
      ptr_long = ptr_long  + 1;
        count++;
    }
    printf("Count: %d\n", count);

    for (size_t i = 0; i < 11; i++)
    {
      printf("%ld\n", array[i]);
    }

    array[10] = (long)ptr;
    printf("Pointer in long after typecast: %ld\n", array[500]);
    

    return 0;





  }