#include <stdio.h>

int main() 
{
    int arr[10] = {1,1,2,3,45,6,2,6,7,45};
    int brr[10];
    
    int length  = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    
    for (int i = 0; i<length;i++)
    {
        int flag = 0;
        for (int j = 0; j< length; j++)
        {
            if(arr[i] == brr[j])
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
        {
            brr[count] = arr[i];
            count++;
        }
    }
    
    int l = sizeof(brr) / sizeof(brr[0]);
    for (int i = 0; i<count; i++)
        printf("%d,",brr[i]);
 
}