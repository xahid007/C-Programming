// prime number recursively
#include <stdio.h>
int isPrime(int p, int i)
{
    if(p == i)
        return 1;
    if(p % i == 0)
        return 0;
    
    return isPrime(p, i+1);
}
int main() 
{
    int p = 9;
    printf("%d",isPrime(p, 2));
    
}