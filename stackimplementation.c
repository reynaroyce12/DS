/*----------------------------------------------------------
stackimpl.c
MENU DRIVEN PROGRAM FOR STACK IMPLEMENTATION

REYNA ROYCE
5.3.2021
------------------------------------------------------------*/


#include<stdio.h>
#include<stdlib.h>
# define MAX 30

    struct STACK{                                             //structure creation
	int A[MAX];
	int Top;
};

struct STACK S;                                              //creating structure variable

//-------------------------function prototype--------
void push(int Num);
int pop();
void Fndisplay();
void FnMenu(int *choice);

int main()
{
	int choice,Num;
	S.Top=0;                                                // initialzing stack
	
	while(1){
	FnMenu(&choice); 

		switch(choice){
			
			case 1:
				{
					printf("\n Enter the element you want to input: \n");
					scanf("%d",&Num);
					push(Num);
					getch();
					break;
				}
			case 2:
				{
					printf("\n The Element deleted is %d \n",pop(Num));
					getch();
					break;
					
				}
			case 3:
				{
					printf("\n The stack now contains: \n");
					Fndisplay();
					getch();
					break;
				}
			case 4:
				{
					exit(1);
				}
			default:
				printf("\n Enter a Valid choice! \n");
				getch();
				FnMenu(&choice);

		}

	}
	
}

//------------------------------function defintion of push()------------------
void push(int Num)
{
	if(S.Top==MAX){
		printf("\n Stack is Full! \n");
		exit(1);
	}else{
	S.Top++;
	S.A[S.Top]=Num;
	printf("\n Added to stack! \n");
}
}

//------------------------------function defiition of pop()--------------------
int pop()
{
	int Num;
	if(S.Top==0){
		printf("\n Stack is empty!");
		exit(1);
	}
	Num=S.A[S.Top];
	S.Top--;
	return Num;
}


//-----------------------------funtcion to display stack------------------------
void Fndisplay()
{
	int i;
	if(S.Top==0){
		printf("\n Stack is empty! \n");
		exit(1);
   }
   for(i=S.Top;i>=1;i--){
   	printf("%d\n",S.A[i]);
   }
}


//-----------------------------function for Menu---------------------------------
void FnMenu(int *choice)
{
	system("cls");
	printf("\n------------------STACK IMPLEMENTATION-----------------\n\t\t\t");
	printf("\n 1. Enter an element. ");
	printf("\n 2. Delete an element. ");
	printf("\n 3. Display the stack. ");
	printf("\n 4. Exit \n");
	
	printf("\n");
	printf("\n Enter your choice from the Menu! \n");
	scanf("%d",choice);
}



