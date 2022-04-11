#include <stdio.h>
int Max(int *A, int n)
{
    int max = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[0] < A[i])
        {
            max = A[i];
        }
    }
   
    return max;
}

void CountSort(int *A, int n, int pos)
{

    int Count[10]; 

    for (int i = 0; i < n; i++)
    {
        Count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        ++Count[(A[i] / pos) % 10];
    }

    for (int i = 1; i <= 10; i++)
    {
        Count[i] += Count[i - 1];
    }


    for (int i = n - 1; i >= 0; i--)
    {
        B[Count[(A[i] / pos) % 10] - 1] = A[i];
        Count[(A[i] / pos) % 10]--;
    }

    for (int i = 0; i < n; i++)
    {
        A[i] = B[i];
    }
}

void RadixSort(int *A, int n)
{
    int max = Max(A, n);
    int pos;

    for (pos = 1; max / pos > 0; pos*10)
    {
        CountSort(A, n, pos);
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
    RadixSort(A, n);
    printf("Sorted Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}
