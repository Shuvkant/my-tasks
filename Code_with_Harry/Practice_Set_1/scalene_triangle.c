#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the value of a, b, c");
    scanf("%f%f%f", &a, &b, &c);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("The ares of the triangle is %f", area);
    }
    else
        {
            printf("Triangle cannot be formed");
        }
    
return 0;
}