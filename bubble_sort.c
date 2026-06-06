//BUBBLE SORT

#include <stdio.h>

int main(void) 
{
    int N, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

	int arr[N];
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++) 
        scanf("%d", &arr[i]);

    for (i = 0; i < N - 1; i++) 
	{
        for (j = 0; j < N - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order: ");
    for (i = 0; i < N; i++) 
        printf("%d ", arr[i]);


    return 0;
}

