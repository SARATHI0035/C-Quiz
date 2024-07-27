#include <stdio.h>
#include <math.h>
int main()
{
    //power of function
   float r,a,b;
    a=2.0;
    b=3.0;
    printf("Enter the base value : ");
    scanf("%f",&a);
    printf("Enter the exponent value : ");
    scanf("%f",&b);
    r=pow(a,b);
    printf("Square root of the number is : %f",r);

    //Square root Function
    float s;

    printf("\nEnter the value to find square root: ");
    scanf("%f",&s);
    s=sqrt(s);
    printf("Square root of the number is : %f",s);
    return 0;
}
