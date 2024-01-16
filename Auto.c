#include<stdio.h>

void Display()
{
    int no = 11;    //auto int no = 11;
    int i;          //auto int i ;
    auto int j = 21;

    printf("Value of No : %d\n",no);
    printf("Value is i : %d\n",i);
}

int main()
{
    Display();

    //printf("%d\n",no);

    return 0;
}