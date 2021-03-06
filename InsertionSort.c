#include <stdio.h>

void InsertionSort(int *A, int n)
{
    int key, j;
    int comparisons=0, shifts=0;
    printf("Sorted array is: ");
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        comparisons=comparisons+1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
            shifts=shifts+1;
        }
        A[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nNo. of comparisons are: %d and No. of Shifts are: %d\n",(comparisons-1),shifts);
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
    InsertionSort(A, n);
}