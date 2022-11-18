#include<stdio.h>
int main()
{
    int a =12345;
    printf("\ncase 1:%d", a); //w not specified//  
    printf("\ncace 2:%15d", a);
    printf("\ncase 3:%-15d", a);
    printf("\ncase 4: %015d", a);
    printf("\ncase 5: %3d\n", a); // w less than width of data to print

}
