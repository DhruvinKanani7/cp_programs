#include <stdio.h>

int main()
{
    int a;
    printf("enter number to check...\n");
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("this number odd");
    }
    else
    {
        printf("this number is even");
    }
    return 0;
}