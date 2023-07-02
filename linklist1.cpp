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

void insertAfter()
{
	
	int n,target;
	struct node *ptrnew , *ptrthis;

	printf("\nEnter Number After Which u wanna put:\n");
	scanf("%d\n",&target);
	for(ptrthis=header;ptrthis!=NULL;ptrthis=ptrthis->next)
	{
		if(ptrthis->data==target)
		{
				printf("\nEnter Your Data To Add in Middle:\n");
				scanf("%d\n",&n);
				ptrnew=getnode(n);
				ptrnew->next=ptrthis->next;
				ptrthis->next=ptrnew;
				printf("\nNode Inserted After %d:",target);
				return;
		}
	}
	
	printf("\nTarget Node Not Found");
}
void insertBefore()
{
	
int n,target;
	struct node *ptrnew , *ptrthis,*ptrback; //ptrback to follow

	printf("\nEnter Number Before Which u wanna put:\n");
	scanf("%d",&target);
	for(ptrthis=ptrback=header;ptrthis!=NULL;ptrthis=ptrthis->next)
	{
		if(ptrthis->data==target)
		{
				printf("\nEnter Your Data To Add in Middle:\n");
				scanf("%d",&n);
				ptrnew=getnode(n);
				if(ptrthis==header)
				{
					ptrnew->next=header;
					header=ptrnew;
				}
				else
				{
					
					ptrnew->next=ptrthis;
					ptrback->next=ptrnew;
					
				}
			
				printf("\nNode Inserted before %d\n",target);
				return;
		}
		ptrback=ptrthis;
		
	}
	
	printf("\nTarget Node Not Found\n");	
	
	
}

void insertAtFront()
{
	int n;
	struct node *ptrnew;
	printf("\nEnter A Number:\n");
	scanf("%d",&n);
	ptrnew=getnode(n); //new node came
	ptrnew->next=header; 
	header=ptrnew;
		
	printf("\nNode Inserted At Front");
}
	
void removeFromFront()	

{
struct node *ptrthis;	
		if(header==NULL)
		{
		
		printf("\nEmpty List\n");
			
		}	
	else
	{
		
		ptrthis=header;
		header=header->next;
		free(ptrthis);
		printf("\nNode Removed From Front.");
		
	}
	
	
}
void removeFromLast()
{
	struct node*ptrthis,*ptrback;

	if(header==NULL)
	{
		printf("\nListEmpty.");
	}
	else
	{
		for(ptrthis=ptrback=header;ptrthis->next!=NULL;ptrthis=ptrthis->next)
		{
			
			ptrback=ptrthis;
			
		}
		if(ptrthis==header)
		{
		
			header=NULL;
			
		}
		else
		{
			ptrback->next=NULL;
			free(ptrthis);
			printf("\nRemoved From Last.");
		}		
	}
	
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
		printf("\nSELECT OPTION\n1.Insert\n2.RemoveFromFront\n3.List\n4.insertAtFront\n5.InsertAfter\n6.insertBefore\n7.RemoveFromlast\n8.Exit\n\n");
		ch=getche();
		switch(ch)
		{
			case '1':insertAtlast();break;
			case '2':removeFromFront();break;
			case '3':printf("\n");display();break;
			case '4' :insertAtFront();break;
			case'5' :insertAfter();break;
			case'6':insertBefore();break;
			case'7':removeFromLast();break;
			case '8':return 0;
		
			
		}
		getch();
	}
}
