#include <stdio.h>

int Merge(int *A, int n, int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = lb;
    int B[n];
    while (i <= mid && j <= ub)
    {
        if (A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            B[k] = A[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++){
        A[k]=B[k];
    }
}

void MergeSort(int *A, int n, int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        MergeSort(A, n, lb, mid);
        MergeSort(A, n, mid + 1, ub);
        Merge(A, n, lb, mid, ub);
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
    MergeSort(A, n, 0, n - 1);
    printf("Sorted Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}