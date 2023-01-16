#include <stdio.h>

int main()
{
    int sum,i;



    for(i=0;i<=15;i++)
    {
        printf("%d\t",i);
        sum=sum+i;
    }
    printf ("%d",sum);
    return 0;
}