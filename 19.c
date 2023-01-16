#include <stdio.h>

int main()
{
    int sum=1,noelem,i;

    printf("enter number of elements you want");
    scanf("%d",&noelem);

    for(i=1;i<=noelem;i++)
    {
        sum=sum*i;
        
    }
    printf("%d",sum);


    
    return 0;
}