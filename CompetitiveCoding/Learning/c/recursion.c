#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main(int argc, char** argv){

	int userInput;

	printf("Please provide a number in order to calculate the factorial\n");

	scanf("%d", &userInput);

	for (size_t i = 0; i <= userInput; i++)
	{
		printf("%ld! = %d \n", i, factorial(i));
	}
	


	return 0;
}

int factorial(int n){

	if(n <= 1){
		return 1;
	}
	else{
		return (n * factorial(n-1));
	}
}