#include<stdio.h>
int main()
{
    
int a, b, teg;
printf("Enter the value of a and b\n");
scanf("%d%d", &a, &b);
printf("Before Swapping a=%d and b=%d", a, b);
teg=a;
a=b;
b=teg;
printf("After swapping a=%d and b=%d", a, b);

}
