#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv){

	printf("Give me a string\n");
	char s[10];
	scanf("%s", s);

	if (s > 10){
		return 1;
	}


	printf("You gave me %s with length %ld \n", s, strlen(s));

	char* t = malloc(strlen(s) + 1);


	//s = t; (this will copy the memory address, so they will point to the same address) instead
	//if we use malloc and copy each char one by one they will live in different memory space
	// for (size_t i = 0, n = strlen(s); i < n + 1; i++)
	// {
	// 	t[i] = s[i];
	// }

	// instead of the for loop simply use strcpy(destination, source)

	strcpy(t,s);

	

	printf("t is %s \n", t);

	if(strlen(t) > 0 ){
		t[0] = toupper(t[0]);
	}

	printf("s is %s \n", s);
	printf("t is %s \n", t);



	free(t);
	return 0;

}