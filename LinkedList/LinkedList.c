#include <stdio.h> 
#include <stdlib.h> 

struct node 
{
	int data;
	int key; 
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL; 

//insert link at the first location 
void insertFirst(int key, int data)
{
	//Create a link 
	struct node *link = (struct node*) malloc(sizeof(struct node));
	
	link->key = key;
	link->data = data; 
	
	//point it to old first node 
	link->next = head;
	
	//point first to new first node 
	head = link; 
}

//display the list 
void printList()
{
	struct node *ptr = head; 
	printf("\n[ ");
	
	while(ptr != NULL)
	{
		printf("(%d,%d) ",ptr->key,ptr->data);
		ptr = ptr->next;
	}
	
	printf(" ]");
}

void main()
{
	insertFirst(1,100);
	insertFirst(1,200);
	insertFirst(1,300);
	insertFirst(1,400);
	insertFirst(1,500);
	
	printList();
}