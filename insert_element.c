#include<stdio.h>

void insertElement(int arr[], int n, int elem, int pos) 
{
    int i;
    for (i = n; i >= pos; i--)
    {
    	  arr[i] = arr[i - 1];
	}
    	arr[pos - 1] = elem;
    	n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main() 
{
    int n, i, elem, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
    	scanf("%d", &arr[i]);
	}   
    printf("Enter element to insert: ");
    scanf("%d", &elem);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);
    insertElement(arr, n, elem, pos);
}
