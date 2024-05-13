#include <stdio.h>
#include <stdlib.h>

typedef struct listNode listNode;
struct listNode{
	char data;
	listNode* next_ptr;
};

void display_instructions(void);
void insertItem(char data, listNode* listNode);

int main(void){

	//initially start here
	listNode* start = NULL;

	char item;

	display_instructions();

	unsigned int choice;
	scanf("%u", &choice);

	while(choice != 3){
		switch(choice){
		case 1:
			puts("Enter a character");
			scanf("%c", &item);

			listNode* new_node = malloc(sizeof(listNode));

			if(new_node == NULL){

			}

			new_node->data = item;
			new_node->next_ptr = NULL;

			// start = new_node;
			// start->next_ptr = new_node

			

			
			break;
		case 2:
			puts("case 2");
			break;
		case 3:
			puts("case 3");
		default:
			puts("Invalid input!");
			display_instructions();
			scanf("%u", &choice);
			break;
		}
	}
	





	



}

void display_instructions(void){
	puts("Enter your choice:\n1 to insert an element into the list\n2 to delete an element from the list\n3 to quit");
}

// void insertItem(char data, listNode* current){

// 	listNode* new_node = malloc(sizeof(listNode));

// 	new_node->data = data;
// 	new_node->next_ptr = NULL;

// 	current->next_ptr = new_node;

// }


