#include <stdio.h>

int main()
{
    int a,b,c,max;
    printf("enter 3 numbers=\n");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?(a>c?a:c):(b>c?b:c);
    printf("the gretest number is %d",max);
    return 0;
}