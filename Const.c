#include<stdio.h>

int main()
{
    int x = 11;
    
    const int Y = 11;  // Read only variable

    x++;     //Allowed
    x--;     //Allowed
    x = 21;  //Allowed

    Y++;       //Not Allowed
    Y--;       //Not Allowed
    Y = 21;    //Not Allowed


    return 0;

}