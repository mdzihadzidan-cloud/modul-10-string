#include<stdio.h>
int main ()
{
    char s[30];
    // scanf("%s",&s);
    fgets(s,15,stdin);
    printf("%s",s);
    
    return 0;
}