#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node *next;
};

int main()
{
    int n, i;
    struct Node *start=NULL, *temp=NULL, *newNode = NULL;
    printf("Enter the number of Nodes: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newNode= (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value: ");
        scanf("%d",&newNode -> data);
        newNode->next = NULL;

        if(start == NULL)
            start= temp=newNode;

        else
        {
            temp ->next= newNode;
            temp= newNode;
        }
    }

    printf("Linked List: ");
    temp= start;
    while(temp!= NULL)
    {

        printf("%d ", temp -> data);
        temp = temp -> next;
    }

    int num, flag =0;
    temp =start;
    printf("\nEnter the element to be searched: ");
    scanf("%d",&num);
    while(temp!= NULL)
    {
         if(temp->data == num)
           {
            flag =1;
            break;
        }
        temp = temp -> next;
    }
       if(flag == 1)
        printf("Element found");
       else
        printf("Element not found");
}


