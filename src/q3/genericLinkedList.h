#ifndef CT331_ASSIGNMENT_GENERIC_LINKED_LIST
#define CT331_ASSIGNMENT_GENERIC_LINKED_LIST

typedef void(*printData)(void*); // Function pointer.

typedef struct genericListElementStruct {
	void* data;
	printData print;
	size_t size;
	struct genericListElementStruct* next;
} genericListElement;
//Returns a pointer to the element
genericListElement* createEl(void* data, size_t size, printData print);

// Returns the number of elements in a linked list.
int length(genericListElement* list);

//Prints out each element in the list
void traverse(genericListElement* start);

//Returns the pointer to the new element
genericListElement* insertAfter(genericListElement* after, void* data, size_t size, printData print);

// Update the list reference using side effects.
void push(genericListElement** list, void* data, size_t size, printData print);

// Pop an element from the head of a list.
// Update the list reference using side effects.
genericListElement* pop(genericListElement** list);

// Dequeue an element from the tail of the list.
genericListElement* dequeue(genericListElement* list);

//Delete the element after the given el
void deleteAfter(genericListElement* after);

// Update the list reference using side effects.
void enqueue(genericListElement** list, void* data, size_t size, printData print);


#endif