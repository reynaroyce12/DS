#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *top=NULL;

//function prototypes

void push(int);
int pop();
void display();

//-----------------------function defintions-------
void push(int num)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\n stack is full! ");
	}
	newnode->data=num;
	newnode->next=top;
	top=newnode;
}


void dispay()
{
	if(top==NULL){
		printf("\n stack is empty");
	}else{
	struct node *temp=top;
	while(temp->next!=NULL){
		printf(" %d---> ",temp->data);
		temp=temp->next;
	}
	printf("%d--->NULL ",temp->data);
}
}

int pop()
{
     if(top==NULL){
     	printf("\n stack is empty \n");
	 }else{
	 	struct node *temp=top;
	 	top=top->next;
	 	return(temp->data);
	 	free(temp);
	 }
}

// ----------------------------------------------------------------------------------------

int main()
{
	int choice,num;
	while(1){
		printf("\n-------------STACK IMPLEMENTATION USING LINKED LIST------------\n");
		
		printf("\n 1. Push an element.");
		printf("\n 2. Delete an element.  ");
		printf("\n 3. Display the stack. ");
		printf("\n 4. exit");
		
		printf("\n Enter your choice from the menu: \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				{
					printf("\n Enter an element to add: \n");
					scanf("%d",&num);
					push(num);
					printf("\n Node created! \n");
					getch();
					break;
				}
			case 2:
				{
					printf("\n The Node deleted with data %d",pop());
					getch();
					break;
				}
		   case 3:
			    {
				   printf("\n The stack now is: \n");
				   dispay();
				   getch();
				   break; 
				}
			case 4:
				{
					exit(0);
				}
			default:
				printf("\n Enter a valid choice! ");
				getch();
   }
			
	}
	return 0;
}
