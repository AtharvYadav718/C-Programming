#include<stdio.h>
int i;
int j = 11;

extern int No;
 int main()
 {
   printf("Value of i : %d\n",i);
   printf("Value of j : %d\n",j);
   printf("Value of No : %d\n",No);

   return 0;
 }