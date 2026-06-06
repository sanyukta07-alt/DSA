#include <stdio.h>

void selectionSort(int arr[], int n);

int main(void)
{
	int n, i;
    printf("Enter the limit: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(i=0; i < n; i++)
    scanf("%d", &arr[i]);

    selectionSort(arr, n);
    printf("The sorted array: ");
    for(i=0; i<n; i++)
    printf("%d ", arr[i]);
}

void selectionSort(int arr[], int size)
{
	int i, j = 0;
	int minIndex, temp = 0;

	for(i = 0; i< size-1; i++)
	{
		minIndex=i;
		for(j = i + 1; j < size; j++)
		{
			if(arr[j] < arr[minIndex])
			  minIndex = j;

		}
		temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
}
