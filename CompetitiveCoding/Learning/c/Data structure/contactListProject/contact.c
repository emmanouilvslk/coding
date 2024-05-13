#include "contact.h"

list create_list(){


	list contactList = malloc(sizeof(list));
	
	assert(contactList);

	contactList->size = 0;
	contactList->head = NULL;
	contactList->tail = NULL;

	return contactList;

}

int list_isEmpty(list cList){
	if(cList->head == NULL){
		return 1;
	}
	else{
		return 0;
	}
}
