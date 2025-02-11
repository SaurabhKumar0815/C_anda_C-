#include <stdio.h>
int main ()
{
    int a[10][10],b[10][10],c[10][10],i,j,n;
    printf("enter the element for row and coulmn");
    scanf("%d",&n);
    printf("Enter the element of first matrix");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter the element of second matrix");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("multiplication of two matrix are:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);


        }
        printf("\n");
    }
    return 0;
}