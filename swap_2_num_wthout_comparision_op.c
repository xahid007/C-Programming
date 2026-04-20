// swap numbers without using comparison operator
#include <stdio.h>

int main() 
{
    int a = 10;
    int b = 20;
    
    printf("Before swap a = %d and b = %d\n", a,b);
    
    b = a+b;
    a = b - a; //20
    b = b - a;
    
    printf("After Swap a = %d and b =%d",a,b);

}