#ifndef CONTACT_H
#define CONTACT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

#define CAPACITY 20

typedef struct contact{
	char* name;
	char* phone_number;
	char* email;
}contact;

typedef struct nodeR* node;
struct nodeR
{
	contact data;
	node next;
};

typedef struct listR* list;
struct listR{
	int size;
	node head, tail;
};


list create_list();
int list_isEmpty(list cList);
#endif