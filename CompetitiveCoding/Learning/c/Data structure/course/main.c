#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
struct node{
	int data;
	node* next;
};

//it will take an array and it will create a linked list using these elements
void create(int A[], int arrayLength);
void display(node* node);
void displayRecursive(node* node);
void countListNodes(node* node);
void addListNodes(node* node);
int addListNodesRecursive(node* node);
int findMax(node* node);
int findMaxRecursive(node* node);


node* first = NULL;


int main(void){

int A[5] = { -5100, -4,-1500,-10, -2500};
	int array_length = sizeof(A) / sizeof(A[0]);  


	create(A, array_length);

	// display(first);
	// displayRecursive(first);
	// countListNodes(first);

	
	// printf("%d\n",addListNodesRecursive(first));
	printf("%d\n",findMaxRecursive(first));

	

	return 0;
}

void create(int A[], int arrayLength){
	node* new,*last;

	first = (node*) malloc(sizeof(node));

	if(first == NULL){
			return;
		}

	first->data = A[0];
	first->next = NULL;
	last = first;

	for (size_t i = 1; i < arrayLength; i++)
	{

		new = (node*) malloc(sizeof(node));

		new->data = A[i];
		new->next = NULL;

		last->next = new;
		last = new;
	}
	

}

void display(node* node){
	while(node){
		printf("Linked List data %i\n", node->data);
		node = node->next;
	}
}

void displayRecursive(node* node){
	
	if(node){
		printf("Linked List data %i\n", node->data);
		displayRecursive(node->next);
	}
}

void countListNodes(node* node){

	int counter = 0;

	while(node != NULL){
		counter++;
		node = node->next;
	}

	printf("Counter %i\n", counter);


}

void addListNodes(node* node){

	int sum = 0;
	while(node){
		sum+= node->data;
		node = node->next;
	}
	printf("Sum of the nodes is %d\n",sum);

}

int addListNodesRecursive(node* node){
	if(node){
		return addListNodesRecursive(node->next) + node->data;
	}
	else{
		return 0;
	}


}

int findMax(node* node){
	int max = -32768 ;
	while (node)
	{
		if(node->data > max){
			max = node->data;
		}
		node =  node->next;

	}
	return max;
}

int findMaxRecursive(node* node){

	if(node){
		int max = findMaxRecursive(node->next);


		return (max > node->data) ? max : node->data;
		// if( max > node->data){
		// 	return max;
		// }
		// else{
		// 	return node->data;
		// }
	}
	else{
		return -32768;
	}

}