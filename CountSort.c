#include <stdio.h>

int CountSort(int *A, int n)
{
    int k = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[0] < A[i])
        {
            k = A[i];
        }
    }
    printf("K is %d\n", k);
    int count[k];
    for (int i = 0; i <= k; i++)
    {
        count[i] = 0;  //Initialize count array with zero
    }

    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;  //Storing Each number count and storing it in count array
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    int b[n];
    for (int i = n - 1; i >= 0; i--)
    {
        b[--count[A[i]]] = A[i];
    }

    for(int i=0;i<n;i++){
            A[i]=b[i];
        }
        printf("\nSorted Array is:\n");
        for(int i=0;i<n;i++){
            printf("%d ",A[i]);
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
        CountSort(A, n);
    }
