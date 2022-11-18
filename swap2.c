#include<stdio.h>
int main()
{
    int a, b, teg;
    printf("Enter the value of a:\n");
    scanf("%d", a);

    printf("Enter the value of b:\n");
    scanf("%d", b);

    printf("Before swapping the value of a is :%d and b is: %d\n", a, b);
    teg=a;
    a=b;
    b=teg;
    printf("After swapping the value of a is :%d and b is %d",a, b);
}