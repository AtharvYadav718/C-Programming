#include<stdio.h>

int Sum(int No1, int No2)
{
    int Result = 0;
    Result = No1 + No2;
    return Result;
}

int Sub(int No1, int No2)
{
    int Result = 0;
    Result = No1 - No2;
    return Result;
}

int Mul(int No1, int No2)
{
    int Result = 0;
    Result = No1 * No2;
    return Result;
}

int main()
{
    int Value1 = 10;
    int Value2 = 11;
    int Ans = 0;  
    
    Ans = Sum(Value1,Value2);
    printf("Addition is :%d\n",Ans);

    Ans = Sub(Value1,Value2);
    printf("Substraction is :%d\n",Ans);

    Ans = Mul(Value1, Value2);
    printf("Multiplication is :%d\n",Ans);

    return 0;

}