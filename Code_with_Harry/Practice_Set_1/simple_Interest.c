#include<stdio.h>
int main()
{
    int p, t, r, i;
    printf("Enter the principal amount");
    scanf("%d", &p);
    printf("Enter the time duration");
    scanf("%d", &t);
    printf("Enter the rate of interest per annum");
    scanf("%d", &r);
    i=(p*t*r)/100;
    printf("The required simple interest is %d\n", i);
}