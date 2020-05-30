#include <stdio.h>
 
int factorial(int);
int fact(int);
 
int main()
{
    int num;
    int result,res;
 
    printf("Enter a number to find it's Factorial: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        result = factorial(num);
        res = factorial(num);
        printf("The Factorial(using recursion)of %d is %d.\n", num, result);
        printf("The Factorial(using non recursion)of %d is %d.\n", num, res);
    }
    return 0;
}
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * factorial(num - 1));
    }
}

int fact(int N)
{
 int RESULT=1,I;
    for(I=N;I>0;I--)
    RESULT=RESULT*I;
 return(RESULT);
}
