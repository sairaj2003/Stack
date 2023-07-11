#include <stdio.h>
#include <stdlib.h>
#define size 5

int push();
void pop();
void display();

int main() 
{
	int stack[size];
	int top=-1;
	int ch,i;
	int elm;
	
	do
	{
		printf("\n------------------------------------------------------------");
		printf("\n                          Operations                        ");
		printf("\n------------------------------------------------------------"); 
		printf("\n1.Push\n2.pop\n3.Display");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\nEnter element that you want to push into the stack:");
				scanf("%d",&elm);
				if(top==size-1)
				{
					printf("\nStack is full...");
				}
				else
				{
					stack[++top]=elm;
					printf("\n%d is push into the stack");
				}
				break;
				
			case 2:
				if(top==-1)
				{
					printf("\nStack is empty");
				}
				else
				{
					printf("\n%d is pop from stack",stack[top]);
					stack[top]=0;
					top--;
				}
				break;
				
			case 3:
				i=top;
				
				if(i==-1)
				{
					printf("\nStack is empty...");
				}
				printf("\nStack is : ");
				while(i != -1)
				{
					printf("%5d",stack[i]);
					i--;
				}
				break;
				
			default:
				printf("\nInvalid choice...!Please enter correct choice");
		}
		printf("\n------------------------------------------------------------");
		printf("\nDo you want to continue if yes press 1 else other");
		scanf("%d",&ch);
	}
	while(ch==1);
	return 0;
}
