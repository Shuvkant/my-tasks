
#include<stdio.h>
int main()
{
    int i=0;
    while (i!=0)
    {
    char ch;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter the character:");
    scanf("%c", &ch);
    i++;
    lowercase_vowel = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    uppercase_vowel = (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    if(lowercase_vowel || uppercase_vowel)
        {
            printf("%c is a vowel.\n", ch);
        }
        else
        {
            printf("%c is a consonant.\n", ch);
        }
    }
    return 0;
}
