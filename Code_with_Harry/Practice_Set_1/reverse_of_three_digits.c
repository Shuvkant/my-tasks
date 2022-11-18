#include<stdio.h>

int main()
{
    int n, o, rem, mer, r;
    printf("Enter the three digit  number ");
    scanf("%d", &n);
    o=n;    
        rem=n%10;
        n=n/10;
        mer=n%10;
        n=n/10;
        r=((rem*100)+(mer*10)+n);
    
    printf("The reverse of the %d is %d\n",o, r);

return 0;
}