#include <stdio.h>

int main()
{
    int n1=0,n2=1,n3,noelem,i;

    printf("enter number of elements you want");
    scanf("%d",&noelem);

    for(i=3;i<=noelem;i++)
    {
        n3=n1+n2;
            printf("%d\t",n3);
        
        n1=n2;
        n2=n3;
    }
    return 0;
}