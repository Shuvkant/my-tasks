//Area of circle//
#include<stdio.h>
#define pi 3.14
int main()
{
    
    float  r, A;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    A=pi*r*r;
    printf("The area of circle having radius %f is %f\n", r, A);
}