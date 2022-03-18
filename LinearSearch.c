#include <stdio.h>

int linearSearch(int *ptr, int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] == element)
        {
            printf("Element is present at index %d", i);
        }
    }
       printf("Element not present");
        return -1;
}

int main()
{
    int arr[100], n, element;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search in array: ");
    scanf("%d", &element);
    linearSearch(arr, n, element);

    
}