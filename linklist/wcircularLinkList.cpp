Keep tapping! ??
nggamming
Title
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
#include<string.h>
struct student 
{

	int roll;
	char name[50];
	int age;	
	
};
struct node 
{
	struct student std;
	struct node *next;
	
};

struct node *header=NULL; //empty list denotion
struct node* getnode(struct student s)
{
	struct node*ptrnew=(struct node*)malloc(sizeof(struct node)); //  getnodeprovides new node
	if(ptrnew==NULL)
	{
		printf("\nMemory Allocation fail..");
		getch();
		exit(0);
	}
	
	/*ptrnew->std.roll=s.roll;
	strcpy(ptrnew->std.names=s.name);
	ptrnew->std.age=s.age;
	ptrnew->next=NULL;
	return ptrnew; */
	
	ptrnew->std=s;
	ptrnew->next=NULL;
	return ptrnew;
}

void addStudentAtFront()
{
	struct student s;
	struct node*ptrnew;
	printf("\nEnter Name Of student:\n");
	gets(s.name);
	printf("\nEnter Roll Number:\n");
	scanf("%d",&s.roll);
	printf("\nENter Age of Student:\n");
	scanf("%d",&s.age);
	ptrnew=getnode(s);
	
	if(header==NULL)
	{
		header=ptrnew;
		header->next=header; //circle 
	}
	
	else
	{
		ptrnew->next=header->next;
		header->next=ptrnew;
		
	}
	printf("\ninserted In Front");
}

void display()
{
	struct node*ptrthis;
	if(header==NULL)
	{
		printf("\nLIst Is Empty.");
	}
	else
	{
		printf("\nList Contains :\nRoll\tName\tAge\n");
		ptrthis=header->next;//begin from first node
		do
		{
			
			printf("%d\t%s\t%d\n",ptrthis->std.roll,ptrthis->std.name,ptrthis->std.age);
			ptrthis=ptrthis->next;  
		}while(ptrthis!=header->next); //until we reaqch the first node again
	}
}

void removeFromFront()
{
	struct node*ptrthis;
	if(header==NULL)
	{
		printf("\nList Empty.");
		return;
	}
	
	else if(header==header->next) //on;y one node
	{
		ptrthis=header;
		header=NULL;
	}
	else
	{
		ptrthis=header->next ; //its node to bwe removed
		header->next=ptrthis->next; //bypass ptrthis....
	}
	free(ptrthis);
		printf("\nRmoved From Front.");
}

void removeFromLast()
{
	
	struct node*ptrthis;
	if(header==NULL)
	{
		printf("\nEmpty.");
		return;
	}

	if(header=header->next)
	{
		ptrthis=header;
		header=NULL;
	}
	
	else
	{
		for(ptrthis=header->next;ptrthis->next!=header;ptrthis=ptrthis->next);
		header=ptrthis;
		ptrthis=ptrthis->next;
		header->next=ptrthis->next;
	}
	free(ptrthis);
	printf("\nRemove From Last");
}

void InsertAtLast()
{
		struct student s;
		struct node*ptrnew;
	printf("\nEnter Name Of student");
	gets(s.name);
	printf("\nEnter Roll Number.");
	scanf("%d",&s.roll);
	printf("\nENter Age of Student.");
	scanf("%d",&s.age);
	ptrnew=getnode(s);
	
	if(header==NULL)
	{
		header=ptrnew;
		header->next=header; //circle 
	}
	
	else
	{
		ptrnew->next=header->next;
		header->next=ptrnew;
		header=header->next;
	}
	
	printf("\nInsert St end of list..");
}
int main()
{
	char ch;
	while(1)
	{
	printf("Select Your Option:\n1.Insert At Front \n2.Insert At Last.\n3.Insert After.\n4.InsertBefore\n5.Remove From Front\n");
	printf("6.Remove From Last\n7. Remove Any.\n8.Display All.\n9.Exit\n");	
	fflush(stdin);
	ch=getche();	
		switch(ch)
		{
			case '1': addStudentAtFront(); break;
			case '2' :InsertAtLast();break;
			case'6' : removeFromFront();break;
 			case '8': display();break;
			case '9':  return 0;
		}
	}
}
