#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

//Heapify Method

void MaxHeapify(int *A,int n, int i)
{
    int largest=i;
    int l=2*i+1;
    int r=(2*i)+2;
    if(l<n && A[l]>A[largest])
    {
        largest=l;
    }
     if (r<n && A[r]>A[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(&A[i],&A[largest]);
        MaxHeapify(A,n,largest); 
    }

}

void HeapSort(int *A, int n)
{
    for(int i=(n/2)-1;i>=0;i--) //Build Max Heap
    {
        MaxHeapify(A,n,i);
    }

    for(int i=n-1;i>=0;i--) //Delete
    {
        swap(&A[0],&A[i]);
        MaxHeapify(A,n,0);
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
    HeapSort(A,n);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

// #include<stdio.h>


// //Heapify Method

// void MaxHeapify(int *A,int n, int i)
// {
//     int temp;
//     int largest=i;
//     int l=2*i;
//     int r=(2*i)+1;
//     while(l<=n && A[l]>A[largest])
//     {
//         largest=l;
//     }
//     while (r<=n && A[r]>A[largest])
//     {
//         largest=r;
//     }
//     if(largest!=i)
//     {
//         temp=A[largest];
//         A[largest]=A[i];
//         A[i]=temp; 
//         MaxHeapify(A,n,largest); 
//     }
// }

// void HeapSort(int *A, int n)
// {
//     int temp;
//     for(int i=n/2;i>=1;i--) //Build Max Heap
//     {
//         MaxHeapify(A,n,i);
//     }

//     for(int i=n;i>=2;i--) //Delete
//     {
//         temp=A[1];
//         A[1]=A[i];
//         A[i]=temp;
//         MaxHeapify(A,n,1);
//     }
// }



// int main()
// {
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     int A[n];
//     printf("Enter the elements of array: ");

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     printf("Array is: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",A[i]);
//     }
//     printf("\n");
//     // int value=floor(n/2);
    
//     HeapSort(A,n);
//     for(int i=0;i<n;i++){
//         printf("%d ",A[i]);
//     }
// }