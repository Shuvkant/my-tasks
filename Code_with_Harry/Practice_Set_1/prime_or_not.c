#include<stdio.h>

int main()
{
    int n,shuvkant=0, i;
    printf("Enter the number");
    scanf("%d", &n);
    if(n==1)
    {
        printf("Neither prime number nor composite number");
        // exit(0);
    }
    for(i=2; i<=(n/2); i++)
    {
        if(n%i==0)
        {
            shuvkant=2;
            break;
        }
        }
if (shuvkant==0)
{
    printf("%d is prime number", n);

}
else
{
    printf("%d is not a prime number", n);
}
return 0;
}