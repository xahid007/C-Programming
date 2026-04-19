// Online C compiler to run C program online
#include <stdio.h>


int high(int arr[], int length)
{
    int max = arr[0];
    int second_max = arr[0];
    for (int i = 0; i<length; i++)
    {
        if(max<=arr[i])
            max = arr[i];
    }
    
    for (int i = 0; i<length; i++)
    {
        if(second_max < arr[i] && arr[i] != max)
            second_max = arr[i];
    }
    
    printf("%d and %d", max, second_max);
}

int main() 
{
  int arr[] = {1,2,56,7,0,3,1};
  int length = sizeof(arr) / sizeof(arr[0]);
  
  
  high(arr, length);
  
}