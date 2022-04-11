#include<stdio.h>
#include<math.h>
void Insertion(int *A,int n, int value)
{
    int temp;
    A[n]=value;
    int i=n; 
    while(i>1)
    {
        int parent = floor(i/2);
        if(A[parent]<A[i])
        {
            temp=A[parent];
            A[parent]=A[i];
            A[i]=temp;

            i=parent;
        }
        else
        {
            return;
        }
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
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    int value;
    printf("Enter value to insert: ");
    scanf("%d",&value);
    Insertion(A, n, value);
    n=n+1;
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}