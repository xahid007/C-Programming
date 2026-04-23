#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "12345";
    int l = strlen(str) - 1;
    printf("%d\n",l);
    char temp;
    
    int i = 0;
    int j = l;
    while(i<j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
        
    }
    
    printf("%s",str);
    // puts(str);
}