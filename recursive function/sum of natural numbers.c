#include<stdio.h>

int main()
{
    int n = 5;
    
    int sum(int n)
    {
        if(n == 0)
            return 0;
        else
            return n + sum(n-1);
    }
    
    printf("%d", sum(n));
}