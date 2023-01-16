#include <stdio.h>

void main() 
{
        int a,b,c,d,e,sum,average;
        printf("hit enter\n");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        sum=a+b+c+d+e;
        average=sum/5;
        printf("sum=%d\naverage=%d",sum,average);

}