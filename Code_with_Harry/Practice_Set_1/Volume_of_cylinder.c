#include<stdio.h>
#define pi 3.14
int main()
{
    float h, r, v;
    printf("Enter the height  and radius of cylinder");
    scanf("%f%f", &h, &r);
    v=pi*r*r*h;
    printf("Volume of the cylinder is %f\n", v);
    return 0;
}