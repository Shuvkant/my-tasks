#include<stdio.h>
int main()
{
    char fname[20], lname[30], address[20];
    printf("Enter your first name:");
    scanf("%s", fname);

    printf("Enter your last name:");
    scanf("%s", lname);
    printf("Enter your address");
    scanf ("%s", address);

    printf("Your name is %s %s\n", fname, lname);
    printf("Your address is %s", address);
}