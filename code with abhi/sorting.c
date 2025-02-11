#include <stdio.h>
int main()
{
    int a[10], i, j, c;
    printf("enter element of array");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[j] > a[j + 1])
            {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            }
        }
    }
    printf("sorting list is \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}