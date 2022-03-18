#include <stdio.h>

void SelectionSort(int *A, int n)
{
    int index, temp;
    printf("Sorted array is: ");
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[index])
            {
                index = j;
            }
        }
        temp = A[i];
        A[i] = A[index];
        A[index] = temp;
    }
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    SelectionSort(A, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}