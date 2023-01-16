#include <stdio.h>

int main()
{
    int x,y,t;
    printf("enter value of x and y\n");
    scanf("%d%d",&x,&y);
    t=x;
    x=y;
    y=t;
    printf("x=%d and y=%d(swapped)",x,y);
    return 0;
}