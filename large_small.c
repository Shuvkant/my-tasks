#include <stdio.h>

int main()
{
    int a, b, c, great, small;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (b > c)
        {
            great = a;
            small = c;
            printf("The greatest number is:%d\n", great);
            printf("The smallest number is:%d\n", small);
        }
        // else
        // {
        //     great=a;
        //     small=b;
        //     printf("The greatest number is:%d\n", great);
        //     printf("The smallest number is:%d\n", small);
        // }
    }
    else if (b > c)
    {
        if (c > a)
        {
            great = b;
            small = a;
            printf("The greatest number is:%d\n", great);
            printf("The smallest number is:%d", small);
        }
        //     else
        //     {
        //         great=b;
        //         small=
        //     }
    }
//     else
//     {
//         great = c;
//         printf("The largest number is: %d", c);
//         if (a > b)
//         {
//             small = b;
//         }
//         else
//         {
//             small = a;
//         }
//         printf("The smallest number is:%d", small);
//     }

//     return 0;
// }
}