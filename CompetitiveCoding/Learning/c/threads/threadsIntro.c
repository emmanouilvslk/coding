#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void* routine(){
	puts("Test from threads");
	sleep(2);
	puts("Threads are running in parallel, don't you see?");
}

int main(int argc, char* argv[]){


	pthread_t t1,t2;
	
	if(pthread_create(&t1, NULL, routine, NULL) != 0){
		return 1;
	}
	
	if(pthread_create(&t2, NULL, routine, NULL)){
		return 1;
	}

	if(pthread_join(t1,NULL)){
		return 1;
	}
	if(pthread_join(t2,NULL)){
		return 1;
	}

	return 0;
	
}