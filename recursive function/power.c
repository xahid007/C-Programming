#include<stdio.h>

int main()
{
    int n = 2, p = 3;
    
    int power(int n, int p)
    {
        if(p == 0)
            return 1;
        else
            return n * power(n, p-1);
    }
    
    printf("%d", power(n,p));
}