#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void){

	pid_t id = fork();

	printf("PID RETURNED FROM getpid() %d\n",getpid());
	printf("ID returned from fork %d\n",id);

	printf("PPID RETURNED FROM getppid() %d\n",getppid());



	// printf("%d\n",getppid());


	

	return 0;
}