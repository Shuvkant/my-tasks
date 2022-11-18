// documentation Section :Program to find the area of circle
// #include<conio.h>
#include<stdio.h>  /*link  section*/
#define pi 3.14
float area; /*global declaration section*/
int main()
{
    float r; /*declaration part*/
    printf("Enter tge radius of circle"); /*executable part starts here*/
    scanf("%f", &r);
    area=pi*r*r;
    printf("Area of the circle =%f\n", area);
    return 0;
}