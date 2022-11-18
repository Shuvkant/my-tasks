#include<stdio.h>
int main()
{
    int  n, count=0, o;
    printf("Enter the number");
    scanf("%d", &n);
    o=n;
    while(n!=0)
    {   
        count++;
        // rem=n%10;
        n=n/10;
    }
    printf("the number of digits is %d", count);
    return 0;
}