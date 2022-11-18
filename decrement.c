#include<stdio.h>
int main()
{
    int x, a, b,c;
    a=2;
    b=4;
    c=5;
    x=a--+ ++b-++c;
    printf("x:%d", x);
    return 0;
}

