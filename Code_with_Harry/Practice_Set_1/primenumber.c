// prime number
#include<stdio.h>
int main()
{
    int n, i, flag=0;
    printf("Enter the number");
    scanf("%d", &n);
    if(n==1)
    {
        printf("Neither prime nor composite");

    }
    for(i=2; i<=(n/2); i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }

}