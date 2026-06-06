#include <stdio.h>

void sortArray(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int n, i, key, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
	int arr[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
	sortArray(arr, n);

    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);
	pos = binarySearch(arr, n, key);

    if(pos != -1)
        printf("Element %d found at position %d.\n", key, pos + 1);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
