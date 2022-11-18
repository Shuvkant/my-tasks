#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter the temperatue in celcius:");
    scanf("%f", &c);
    f=((9*c+160)/5);
    printf("The temperature in fahrenheit is :%f", f);
}
// {
//     float a, b, c;
//     printf("Enter the dividend:");
//     scanf("%f", &a);
//     printf("Enter the divisor");
//     scanf("%f", &b);
//     c= a/b;
//     printf("The value of c is %f", c);
// }
