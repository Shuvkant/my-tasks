#include <stdio.h>
#define pi 3.14
int main()
{
    float radius, Area_of_circle;
    printf("Enter  the value of radius");
    scanf("%f", &radius);

    Area_of_circle = pi * radius * radius;
    printf("Area of circle is %f", Area_of_circle);
    return 0;
}