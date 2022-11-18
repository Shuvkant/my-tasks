#include<stdio.h>
int main()
{
    float l, b, A;
    printf("Enter the length of rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle");
    scanf("%f", &b);
    /*printf("Enter the length and breadth of the rectangle:"); you can commnet it
    scanf("%f%f",&l, &b);*/
    A=l*b;
    printf("The area of rectangle is:%f \n", A);

}
