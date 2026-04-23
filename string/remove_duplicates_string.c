#include <stdio.h>
#include<string.h>
int main()
{
 char st[] = "programming";
 char s[100] ={0}; //remove the last garbage

 int count = 0;
 
 for (int i =0; i<strlen(st);i++)
 {
     int flag = 0;
     for(int j = 0; j<count; j++)
     {
         if(st[i] == s[j])
         {
             flag = 1;
             break;
        
         }
         
         
     }
     
     if(flag == 0)
     {
             s[count] = st[i];
             count++;
     }
 }
 
printf("%s",s);
}