#include <stdio.h>
int main() {
  int a[3][3],i,j;
  printf("enter the element of array");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);

    }
  }
  printf("Diagonal element are");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
  {
    if(i==j)
    printf("%d\t",a[i][j]);
  }
  printf("\n");
  }
  return 0;
  }