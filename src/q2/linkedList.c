#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

//Returns a pointer to the element
listElement* createEl(char* data, size_t size){
  listElement* e = malloc(sizeof(listElement));
  if(e == NULL){
    //malloc has had an error
    return NULL; //return NULL to indicate an error.
  }
  char* dataPointer = malloc(sizeof(char)*size);
  if(dataPointer == NULL){
    //malloc has had an error
    free(e); //release the previously allocated memory
    return NULL; //return NULL to indicate an error.
  }
  strcpy(dataPointer, data);
  e->data = dataPointer;
  e->size = size;
  e->next = NULL;
  return e;
}

//Prints out each element in the list
void traverse(listElement* start){
  listElement* current = start;
  while(current != NULL){
    printf("%s\n", current->data);
    current = current->next;
  }
}
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, char* data, size_t size){
  listElement* newEl = createEl(data, size);
  listElement* next = el->next;
  newEl->next = next;
  el->next = newEl;
  return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after){
  listElement* delete = after->next;
  listElement* newNext = delete->next;
  after->next = newNext;
  //need to free the memory because we used malloc
  free(delete->data);
  free(delete);
}

// Returns number of elements
int length(listElement* list) {
	int len = 0;
	listElement* curr = list;
	while (curr != NULL) {
		len++;
		curr = curr->next;
	}
	return len;
}
// Push a new element onto the head of a list.
void push(listElement** list, char* data, size_t size) {
	listElement* newEl = createEl(data, size);
	newEl->next = *list;
	*list = newEl;
}


// Pop an element from the head of a list.
listElement* pop(listElement** list) {
	if (length(*list) == 0) {
		return *list;
	} listElement* head = *list;
	
     listElement* poppedElement = createEl(head->data, sizeof(*(head->data)));
	*list = head->next;

	return head;
}

// Dequeue an element from the tail of the list.
listElement* dequeue(listElement* list) {
	listElement* curr = list;
	while ((curr->next)->next != NULL)
	{
		curr = curr->next;
	}
	listElement* temp = curr->next;
	curr->next = NULL;
	return temp;
}