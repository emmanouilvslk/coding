#include <stdio.h>
#include <stdlib.h>

int main(void){

	long *ptr = (long*)malloc(0x40000);
	size_t message_length;
	char* message;
	
	*ptr = 1;
	printf("Pointer: %p\n", ptr);
	printf("Pointer in long after typecast: %ld\n", (long)ptr);
	printf("Dereferencing the pointer %ld\n", *((long*)(ptr)));




	puts("Enter the length of the message: ");
	scanf("%ld", &message_length);

	message = (char*)malloc(message_length);
	puts("Enter the message: ");
	read(0, message, message_length);

	printf("Pointer of message in long after typecast: %ld\n", (long)message);


	write(1, message, message_length);
	puts("");
	printf("*ptr: %ld\n", *ptr);

	


	


	return 0;
}