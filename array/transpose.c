// Transpose a matrix
#include <stdio.h>

int main() {
    int arr[3][3] = {{1,2,4}, 
                     {5,6,7}, 
                     {8,9,10}};
    
    for (int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(i == j)
                continue;
                
             else
            {
                arr[i][j] = arr[j][i];
            }
        }
        
        
        
       
    }
    
    for (int i = 0; i<3; i++){
        for(int j = 0; j<3; j++)
        {
            printf("%d(%d,%d) ",arr[i][j], i,j);
        }
        printf("\n");
    }
    
    
}