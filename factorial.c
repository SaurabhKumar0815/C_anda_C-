#include<stdio.h>
int main ()
{
    int i, f=1,num;
    printf("enter any number  ");
    scanf("%d",&num);
    for(i=1; i<num; i++)
    f=f * i;
    printf(" factorial number %d is: %d",f,num);
    return 0;
}