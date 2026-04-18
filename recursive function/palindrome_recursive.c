#include <stdio.h>

int main() {
    int n = 1201;
    int reverse = 0;

    int palindrome(int n, int reverse)
    {
        if (n == 0)
         return reverse;
         
        else
        {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            return palindrome(n/10, reverse);
            
        }
    }
    if (n == palindrome(n,reverse))
    printf("%d is plindrome",n );
    else
    printf("Not a palindrome number");
}