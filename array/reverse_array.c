#include <stdio.h>

int main()
{
 int arr[] = {1,2,3,4,5};
 int l = sizeof(arr)/sizeof(arr[0])-1;
 int i = 0; 
 int j = l;
 
 while(i<j)
 {
     int temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
     i++;
     j--;
 }
 
 for(int i = 0; i<=l; i++)
 printf("%d",arr[i]);
}