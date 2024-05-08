#include <stdio.h>
#include <stdlib.h>

typedef struct node{

	int number;
	struct node* next;

}node;


int main(int argc, char** argv){

	node* list = NULL;

	for (size_t i = 1; i < argc; i++)
	{
		node* n = malloc(sizeof(node));

		if(n == NULL){
			//garbage collection needed here if malloc will do return NULL for the 2nd or 3rd node
			return 1;
		}

		n->number = atoi(argv[i]);
		n->next = NULL;
		n->next = list;

		list = n;
	}

	node* ptr = list;

	// for (size_t i = 1; i < argc; i++)
	// {
	// 	printf("%d\n", ptr->number);
	// 	ptr = ptr->next;
	// }

	while(ptr != NULL){
		printf("%d\n", ptr->number);
		ptr = ptr->next;
	}

	// for(node* ptr = list; ptr!=NULL; ptr = ptr->next){
	// 	printf("%d\n", ptr->number);
	// }

	while(ptr != NULL){
		node* next = ptr->next;
		free(ptr);
		ptr = next;
	}




	
	
	

	return 0;
}