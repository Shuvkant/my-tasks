#include<stdio.h>
#define pi 3.14
#define Area(x) pi*x*x
int main()
{
    float r, A;
    // clrscr()
    printf("Enter the radius ofthe circle\n");
    scanf("%f", &r);
    A=Area(r); //Here Area(r) is expanded to 3.1415*r*r//
    printf("Area of %f\n", A);

}