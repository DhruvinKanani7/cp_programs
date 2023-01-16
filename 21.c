#include <stdio.h>

int main()
{
    int i,j,max,arr[10];
    printf("enter array value");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
        printf("the max is=%d",max);
}