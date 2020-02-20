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
	struct node *current = NULL; 
	
	for(current=head;current!=NULL;current=current->next)
	{
		if(current->key == key)
		{
			return current;
		}
	}
	
	return current;
}

void main()
{
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
	int keyToDelete = 5;
	struct node *deletedNode = delete(keyToDelete);
	printf("\nDeleted Node:[(%d,%d)]\n",deletedNode->key,deletedNode->data);	
}