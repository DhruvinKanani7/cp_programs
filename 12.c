#include <stdio.h>

int main()
{
    int y;
    printf("enter year=\n");
    scanf("%d",&y);
    if (y%4==0)
    {
    printf(" %d is leap year",y);
    }
    else{printf("%d is not leap year",y);}
    return 0;
}