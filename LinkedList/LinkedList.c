#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>

struct node 
{
	int data;
	int key; 
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL; 

//display the list 
void printList()
{
	struct node *ptr = head; 
	printf("\n[ ");
	
	//start from the beginning 
	while(ptr != NULL)
	{
		printf("(%d,%d) ",ptr->key,ptr->data);
		ptr = ptr->next;
	}
	
	printf(" ]");
}

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

//delete first item 
struct node* deleteFirst()
{
	//save reference to first link 
	struct node *tempLink = head; 
	
	head = head->next; 
	
	return tempLink;
}

//is list empty 
bool isEmpty()
{
	return head == NULL;
}

int length()
{
	int length = 0; 
	struct node *current; 

	for(current=head;current!=NULL;current=current->next)
	{
		length++;
	}
	
	/*
	struct node *ptr = head; 
	
	while(ptr != NULL)
	{
		length+=1;
		ptr = ptr->next;
	}*/	
	
	return length;
}

//find a link with given key 
struct node* find(int key)
{
	struct node *current = NULL; 
	
	for(current=head;current!=NULL;current=current->next)
	{		
		if(current->key == key)
		{
			break;
		}
	}
	
	return current;
}

//delete a link with given key
struct node* delete(int key)
{
	struct node *current = head; 
	struct node *previous = NULL;
	
	//if list is empty 
	if(head == NULL)
	{
		return NULL;
	}
	
	//for loop implementation 	
	/*
	for(1=1;current!=NULL;current=current->next)
	{
		if(current->key == key)
		{
			break;
		}
		else
		{
			previous = current;
		}
	}
	
	if(previous == NULL)
	{
		head = current->next;
	}
	
	if(previous != NULL)
	{
		previous->next = current->next;
	}
	*/
	
	//while loop implementation	
	while(current->key != key)
	{
		//if it is last node 
		if(current->next == NULL)
		{
			return NULL;
		}
		else	
		{
			//store reference to current link 
			previous = current;
			//move to next link 
			current = current-> next;
		}
	}
	
	//found a match, update the link 
	if(current == head)
	{
		//change first to point to next link 
		head = head->next;	
	}
	else
	{
		//bypass the current link 
		previous->next = current->next;		
	}
	
	return current;
}

void main()
{	
	printf("Original elements of LinkedList:");
	insertFirst(1,100);
	insertFirst(2,200);
	insertFirst(3,300);
	insertFirst(4,400);
	insertFirst(5,500);
	
	printList();
	/*
	deleteFirst();
	
	printList();	
	
	printf("\nCurrent length of LinkedList: %d",length());
	
	int keyToFind = 4;
	struct node *nodeToFind = find(keyToFind);	
	printf("\nInput Key: %d, Node Details: [(%d,%d)]",keyToFind,nodeToFind->key,nodeToFind->data);
	*/
	
	int keyToDelete = 1;
	struct node *deletedNode = delete(keyToDelete);
	printf("\nElements of LinkedList after deleting node with key: %d",keyToDelete);
	printList();
	//printf("\nDeleted Node:[(%d,%d)]\n",deletedNode->key,deletedNode->data);		
}