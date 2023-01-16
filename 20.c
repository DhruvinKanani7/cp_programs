#include <stdio.h>

int main()
{
    int n,i;

    printf("enter number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
           printf("is not prime number");
           break;
        }
        
    }
        if(i==n)
        {
            printf("is prime number");
        }
    return 0;
    
}