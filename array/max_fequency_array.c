// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
  int arr[] = {1,2,56,7,7,7,7,7,0,3,1, 1};
  int l = sizeof(arr) / sizeof(arr[0]);
  int max_count = 0;
  int element ;
  
  for (int i = 0; i<l ; i++)
  {
      int count = 0;
      
      for ( int j = 0; j<l; j++)
      {
          if(arr[i] == arr[j]){
            count++;}
      }
      
      if(max_count < count)
      {
        max_count = count;
        element = arr[i];
      }
  }

   printf("frequency %d of %d", max_count, element);
  
}