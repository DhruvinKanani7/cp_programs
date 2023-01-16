#include <stdio.h>

int main()
{
    int m;
    printf("enter your mark");
    scanf("%d",&m);
    switch (m)
    {
        case 90 ... 100:printf("your grade is A");
        break;
        case 75 ... 89:printf("your grade is B");
        break;
        case 65 ... 74:printf("your grade is C");
        break;
        case 45 ... 64:printf("your grade is D");
        break;
        default:printf("sorry you have failed");
        break;
    }
    return 0;
}