#include<stdio.h>
int main()
{
    int number = 10210;
    int digit;
    int place = 1;
    int result = 0;
    
    while(number!=0)
    {
        if (number == 0)
        {
            digit = 1;
        }
        else
        {
            digit = number%10;
            if (digit == 0)
            {
                digit = 1;
            }

            result = result + (digit * place);
            place = place * 10;
            number = number / 10;
        }
    }
    
    printf("%d", result);
}