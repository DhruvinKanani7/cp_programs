#include <stdio.h>
void swap(int x,int y);

int main()
{

    int a,b;
    printf("enter two number ");
    scanf("%d %d", &a,&b);
    printf("the values before swaping numbers= %d and %d",a,b);
    swap(a,b);
    return 0;
}


void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;

    printf("swawpped values= %d and %d",x,y);
}

