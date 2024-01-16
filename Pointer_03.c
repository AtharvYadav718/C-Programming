#include<stdio.h>
int main()
{   
    int No = 21;

    int *p = &No;

    int *a = &No;

    int **q = &p;

    int **b = &p;

    int ***r = &q;

    int ****x = &r;

    int *****y = &x;
    
    return 0;
}