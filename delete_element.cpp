#include <stdio.h>

int deleteElement(int arr[], int n, int pos)
{
    int i;

    if(pos < 1 || pos > n)
    {
        printf("Invalid position!\n");
        return n;
    }
    for(i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main()
{
    int n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    n = deleteElement(arr, n, pos);
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
