#include<stdio.h>
#include<math.h>
int main()
{
 double a, b, c, discriminant, x1, x2, real, img;
 printf("Enter the value of a, b, c");
 scanf("%lf%lf%lf", &a, &b, &c);

//condition for real and equal roots//
 discriminant=b*b-4*a*c;
 if (discriminant==0)
 {
     x1=x2=-b/(2*a);
     printf("The roots are real and equal\n");
     printf("x1=x2=%lf", x1);
 }

 //conditon for real and distinct roots//
 else if (discriminant>0)
 {
     x1=(-b+(sqrt(discriminant)))/(2*a);
     x2=(-b-(sqrt(discriminant)))/(2*a);
     printf("Roots are real and distinct\n");
     printf("x1=%lf and x2=%lf", x1, x2);    
 }

 //condition for imaginary roots//
 else
 {
     real=-b/(2*a);
     img=sqrt(-discriminant)/(2*a);
     printf("Roots are imaginary\n");
     printf("x1=%lf+%lfi and x2=%lf-%lfi", real, img, real, img);

 }
return 0;
}