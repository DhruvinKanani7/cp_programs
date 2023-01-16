#include <stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;

}


int main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    printf("the factorial of %d is %d",number,fact(number));
}