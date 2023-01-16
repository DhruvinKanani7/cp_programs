#include <stdio.h>

int main()
{
    int x,y;
    char o;
    printf("enter 2 number and oprater\n");
    scanf("%d %d %c",&x,&y, &o);
    switch(o)
    {
        case'+':printf("addition is %d ",x+y);
        break;
        case'-':printf("Substraction is %d ",x-y);
        break;
        case'*':printf("Multiplication is %d ",x*y);
        break;
        case'/':printf("Division is %d ",x/y);
        break;
        default:printf("invalid oprator");
        break;
    }
    return 0;
}