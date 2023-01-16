#include <stdio.h>

int table(int *x,int *y);

void main()
{
    int n,i;
    printf("enter the number of table you want");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,table(&n,&i));
    }

}

int table(int *x,int *y)
{
    int ans;
    ans=*x**y;
    return ans;
}