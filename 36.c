#include <stdio.h>

int large(int x,int y);

void main()
{
    int n1,n2,i;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    large(n1,n2);

}

int large(int x,int y)
{
    if(x>y)
    {
        printf("%d is the largewer number",x);
    }
    else
    {
        printf("%d is larger",y);
    } 

}