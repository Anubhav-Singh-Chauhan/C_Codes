#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int Partition(int *A, int lb, int ub,int loc)
{
    loc=A[lb];
    int pivot = A[lb];
    int start = lb;
    int end = ub;
    int temp;
    while (start < end)
    {
        while (A[start] <= pivot)
        {
            start++;                           
        }
        while (A[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
    }
    temp=A[lb];
    A[lb]=A[end];
    A[end]=temp;

    return end;
}

void Quicksort(int *A, int lb, int ub){
    if(lb<ub){
        int loc = lb;
        loc = rand()%(ub-lb)+lb;
        loc = Partition(A,lb,ub,loc);
        Quicksort(A,lb,loc-1);
        Quicksort(A,loc+1,ub);
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
    Quicksort(A,0,n-1);
    printf("Sorted Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}