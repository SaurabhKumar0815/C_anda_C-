#include <stdio.h>
#include<string.h>
    int main()
    {
struct std 
{
    char name[10] ;
    int id;
    float marks ;

};
        struct std e1={"*Abhi*",60,38.5};
        printf("details of student :");
        scanf("%c",&e1);
        printf("\n(name) :-%s\n (id) :-%d\n (marks) :-%f\n",e1.name ,e1.id, e1.marks);
        return 0;
    }