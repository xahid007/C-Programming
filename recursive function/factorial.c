#include<stdio.h>

int main()
{
    int n = 3;
    
    int fact(int n)
    {
        if(n == 0)
            return 1;
        else
            return n * fact(n-1);
    }
    
    printf("%d", fact(n));
}