#include <stdio.h>
int iterativeBinarySearch(int *A, int start_index, int end_index, int element)
{

   while (start_index <= end_index)
   {
      int middle = (start_index + end_index) / 2;
      if (A[middle] == element)
      {
         return middle;
      }
      if (A[middle] < element)
      {
         start_index = middle + 1;
      }
      else
      {
         end_index = middle - 1;
      }
   }

   return -1;
}
int main(void)
{
   int Arr[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 16;
   int found_index = iterativeBinarySearch(Arr, 0, n - 1, element);
   if (found_index == -1)
   {
      printf("Element not found in the array ");
   }
   else
   {
      printf("Element found at index : %d", found_index);
   }
   return 0;
}