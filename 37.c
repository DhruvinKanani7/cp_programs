#include <stdio.h>

int large(int x,int y);

void main()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    large(x,y);

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