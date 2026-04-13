#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <asm-generic/fcntl.h>
#include <stdint.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <endian.h>


int main(void){

	u_int32_t pid = getpid();

	printf("0x%x\n", pid);

	int fd = open("/home/cipherpsy/myfiles/projects/coding/CompetitiveCoding/Learning/c/test.txt", O_RDWR);

	uint8_t *buf = malloc(0x1000);
	printf("pointer buf %p\n",buf);
	memset(buf, 0x0, 0x1000);	

	// void *test_addr = mmap(0,0x1000, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANON,0,0x0);

	void *fd_user_addr = NULL;
	// mmap() allocates a region of virtual memory in the process's address space. 4KB
	fd_user_addr = mmap(0,0x1000,PROT_READ | PROT_WRITE, MAP_SHARED,fd,0x0); //map the memory from 

	*(uint64_t*)fd_user_addr = htobe64(0x4142434445464748); //This converts the 64-bit integer from host byte order (little-endian on x86) to big-endian before writing it.

	read(fd,buf,0x1000);
	printf("File contents:\n%s\n", buf);



	free(buf);
	close(fd);


	// sleep(-1);



	return 0;
}