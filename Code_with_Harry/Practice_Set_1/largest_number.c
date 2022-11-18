#include<stdio.h>

int main()
{
    int a, b, c, large;
    printf("Enter three numbers a, b,c");
    scanf("%d%d%d", &a, &b, &c);
    if((a>b)&&(a>c))
    {
        large=a;
        printf("The largest number is:%d\n",large);
    }
    else if ((b>c)&&(b>a))
    {
        large=b;
        printf("The largest number is:%d\n", large);

    }
    else
    {
        large=c;
        printf("The largest number is:%d\n", large);

    }
    printf("The first number is: %d\n", a);
    printf("The second number is: %d\n", b);
    printf("The third number is: %d\n", c);

    
return 0;
}


