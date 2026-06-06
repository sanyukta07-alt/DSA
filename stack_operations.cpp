#include<stdio.h>
#define MAX 5
int stack[MAX],top=-1;
void push()
{
 if(top==MAX-1)
 printf("OVERFLOW");
 else
 {
 int k;
 printf("Enter the element:- ");
 scanf("%d",&k);
 top++;
 stack[top]=k;
 printf("%d pushed into the stack.\n", k);
 }
}

void pop()
{
 if(top==-1)
 printf("UNDERFLOW.");
 else
 {
 printf("Element that got popped is %d.\n",stack[top]);
 top--;
 }
}

void display()
{
 int i;
 if(top==-1)
 printf("The Stack is EMPTY.");
 else
 {
 printf("THE STACK IS: ");
 for(i=top;i>=0;i--)
 printf("%d ",stack[i]);
 }
}

int main()
{
 int ch,k=0;
 while(k==0)
 {
 printf("\nEnter 1 for pushing elements in the stack.");
 printf("\nEnter 2 for popping elements from the stack.");
 printf("\nEnter 3 for displaying the stack.");
 printf("\nEnter 4 for exit.");
 printf("\n\nEnter your choice:- ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 		push();
 		break;
 case 2:
 		pop();
 		break;
 case 3:
 		display();
 		break;
 case 4:
 	{
		k=1;
 		printf("\nProgram Terminated.");
 	}
 	
	break;
 	default:
 	printf("Wrong choice.\n");
 }
 }
}

