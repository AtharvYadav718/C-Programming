#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;

    struct Demo *ptr = NULL;
    ptr = &obj2;

    obj1.i =11;
    obj1.f = 90.90;
    obj1.j = 21;

    ptr->i = 51;
    ptr->f = 90.90;
    ptr->j = 101;

    printf("%d\n",obj1.i);
    printf("%d\n",ptr->i);

    
    return 0;
}