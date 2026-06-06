#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertBeginning()
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter element: ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
    printf("Inserted at beginning.\n");
}

void insertEnd()
{
    struct Node *newNode, *ptr;

    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter element: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL)
        head = newNode;
    else
    {
        ptr = head;

        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    printf("Inserted at end.\n");
}

void display()
{
    struct Node *ptr;
    ptr = head;

    if (ptr == NULL)
        printf("Linked List is empty.\n");
    else
    {
        printf("Linked List: ");

        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("\nPress 1 to Insert at Beginning\n");
        printf("Press 2 to Insert at End\n");
        printf("Press 3 to Display\n");
        printf("Press 4 to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insertBeginning();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program Terminated.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 4);

    return 0;
}
