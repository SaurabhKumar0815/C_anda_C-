#include<stdio.h>
#include<string.h>
int main ()
{
char p[10];

    printf("Enter string (*-*):");
gets(p);
    printf("Entered string is :");
    strupr(p);
puts(p);
    return 0;
}