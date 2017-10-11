#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct {
	char* data;
	size_t size;
	struct listElementStruct* next;
} listElement;
//Returns a pointer to the element
listElement* createEl(char* data, size_t size);

// Returns the number of elements in a linked list.
int length(listElement* list);

//Prints out each element in the list
void traverse(listElement* start);

//Returns the pointer to the new element
listElement* insertAfter(listElement* after, char* data, size_t size);

// Push a new element onto the head of a list.
void push(listElement** list, char* data, size_t size);

// Pop an element from the head of a list.
listElement* pop(listElement** list);

// Dequeue an element from the tail of the list.
listElement* dequeue(listElement* list);

//Delete the element after the given el
void deleteAfter(listElement* after);
#endif