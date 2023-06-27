#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct node
{

	int data; //to store number.....hold the actual data in a node
	// now to point other node
	struct node *next; // holds the address of next node in the list
	
};
struct node *header=NULL;//empty list initilized headerrr.........
struct node* getnode(int n)
{
	
	struct node*newnode=(struct node*)malloc(sizeof(struct node)); // dynamically helps to allocate memory
	if(newnode==NULL)
	{
		printf("\nMemory Allocation Failed.");
	}
	newnode->data=n;
	newnode->next=NULL;
	return newnode;
	
}
void insertAtlast()
{
	int n;
	struct node *ptrnew, *ptrthis;
	printf("\nEnter A Number:\n");
	scanf("%d",&n);
	ptrnew=getnode(n);
	if(header==NULL)
	{
		header=ptrnew;
	}
	else
	{
		for(ptrthis=header;ptrthis->next!=NULL;ptrthis=ptrthis->next){}
		ptrthis->next=ptrnew;
	}
	printf("\nNode Inserted At End");
}

void display()
{
	struct node*ptrthis;
	if(header==NULL)
	{
		printf("\nEMPTY");
	}
	else
	{
		for(ptrthis=header;ptrthis!=NULL;ptrthis=ptrthis->next)
		{
			printf("%d\t",ptrthis->data);
			
		}
	}
}



int main()
{
	char ch;
	while(1)
	{
		system("cls");
		printf("\nSELECT OPTION\n1.Insert\n2.Remove\n3.List\n4.Exit\n");
		ch=getche();
		switch(ch)
		{
			case '1':insertAtlast();break;
			case '2':break;
			case '3':printf("\n");display();break;
			case '4':return 0;
			
			
		}
		getch();
	}
}
