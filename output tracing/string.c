// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int i = 0, length;
    char string[]= "Hello\0, world!!";
    length = strlen(string);
    printf("String Length: %d\n",length);
    char *s = string;
    for(i = 0;  i<length; ++i)
    {
        printf("%c", *++s);
    }
}