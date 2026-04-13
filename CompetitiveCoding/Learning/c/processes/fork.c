#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void){


	pid_t id = fork();
	int n;
	int status;

	if(id == 0){
		n = 1;
	}
	else if(id <= -1){
		return 1;
	}
	else{
		n = 6;
	}

	if(id !=0){
		wait(&status);
	}

	for (size_t i = n; i < n+5; i++)
	{
		printf("%ld\n",i);
		fflush(stdout);
	}

	return 0;
}