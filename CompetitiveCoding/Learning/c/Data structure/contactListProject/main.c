#include "contact.h"



int main(void){

	contact* contact1 =  malloc(sizeof(contact));

	if(contact1 == NULL){
		return 1;
	}

	contact1->name = "Manos";
	contact1->email = "manos@gmail.com";
	contact1->phone_number = "+306982156787";


	printf("Name: %s\n", contact1->name);

	node current_node = malloc(sizeof(node));
	current_node->data.email = "manos@gmail.com";



	list my_list = create_list();

	printf("MyList size: %i\n", my_list->size);

	// my_list->head = current_node;
	

	// printf("%s\n", my_list->head->data.email);

	printf("Is empty list: %i\n", list_isEmpty(my_list));






}