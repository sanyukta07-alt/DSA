#include <stdio.h>

int linearSearch(int arr[], int n, int ele);

int main(void) 
{
    int n, ele, i;
	printf("Enter number of elements: ");
    scanf("%d", &n);
	int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
        
    printf("Enter element to search: ");
    scanf("%d", &ele);

    int result = linearSearch(arr, n, ele);

    if (result != -1) 
        printf("Element found at index %d\n", result);
    else 
        printf("Element not found\n");

    return 0;
}

int linearSearch(int arr[], int n, int ele) 
{
	int i;
    for (i = 0; i < n; i++) 
	{
        if (arr[i] == ele) 
            return i; 
    }
    return -1; 
}
