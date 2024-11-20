#include <stdio.h>

int addInt(int n, int m) {
    return n+m;
}

int main(int argc, char* argv[]){

	printf("addInt(%d, %d) = %d\n", 5, 10, addInt(5,10));

	int (*functionPointer)(int,int) = NULL;

	printf("functionPointer address is: %p\n", addInt);

	functionPointer = &addInt;

	printf("functionPointer address is: %p\n", functionPointer);
	
	void *address = (void *)0x555555555149;
	int (*func_ptr)(int,int) = (int (*)(int,int))address;

	printf("Used from raw address %d\n", func_ptr(1,2));
	
}