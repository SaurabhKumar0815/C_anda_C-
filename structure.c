//Wap to intilise one structure variable also print the details of the employees 

#include<stdio.h>
#include<string.h>
int main ()
{
    struct emp 
    {
        char name [10];
        int id ;
        float salary;

    };
     struct emp e1 ={"Abhi",10,39};
    printf("employee details \n");
    printf("name emp :%s\n id emp: %d\n  salary emp: %f\n",e1.name,e1.id,e1.salary);
    return 0;
} 