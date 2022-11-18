#include<stdio.h>
int main()
{
    int n,count=0,rem, o, m;
    printf("Enter the number");
    scanf("%d", &n);
    o=n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("The number of digits is %d", count);
    while (o!=0)
    {
        rem=o%10;

        
        o=o/10;
        o=rem*10+o;
    }
    printf("The reverse number is %d", m);
}