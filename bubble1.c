#include <stdio.h>

void bubbleSort(int arr[], int n);

int main()
{
    int n, i;
    printf("Enter the limit: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(i=0; i < n; i++)
    scanf("%d", &arr[i]);

    bubbleSort(arr, n);
    printf("The sorted array: ");
    for(i=0; i<n; i++)
    printf("%d ", arr[i]);
}

void bubbleSort(int arr[], int n)
{
    int i, j, t;
    for(i = 0; i< n-1; i++)
    {
        for(j =0; j<n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
            t= arr[j];
            arr[j] = arr[j+1];
            arr[j+1]= t;
            }
        }
    }
}



