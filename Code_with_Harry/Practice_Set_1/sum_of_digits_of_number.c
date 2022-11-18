#include<stdio.h>
int main()
{
    int n, sum=0, rem, o; 
    printf("Enter the number"); 
    scanf("%d", &n);
    o=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of digits is %d\n", sum);
    printf("The given digit is %d", o);
    return 0;

}