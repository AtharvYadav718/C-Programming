#include<stdio.h>

void Display()
{
    register int no = 11;   
    register int i;          

    printf("Value of No : %d\n",no);
    printf("Value is i : %d\n",i);
}

int main()
{
    Display();

    //printf("%d\n",no);

    return 0;
}