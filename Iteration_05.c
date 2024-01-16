#include<stdio.h>

int main()
{
    int i = 1;
    int Count = 0;

    printf("Enter number of times you want to display JAY GANESH on Screen\n");
    scanf("%d",&Count);
   do 
    {
        printf("Jay Ganesh...\n");
        i++;
    }while(i <=Count);
    
    return 0;

}