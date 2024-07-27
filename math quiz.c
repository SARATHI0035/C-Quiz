#include <stdio.h>
#include <math.h>
int main()
{
    float a , b;
    printf("Enter the value of a : ");
    //Getting prompt input from user
    scanf("%f",&a);

    printf("Enter the value of b : ");
    //Getting prompt input from user
    scanf("%f",&b);
    //Addition
    printf("Add value : %f + %f = %f",a,b,a+b);
    //Substraction
    printf("\nAdd value : %f - %f = %f",a,b,a-b);
    //Multiplication
    printf("\nAdd value : %f * %f = %f",a,b,a*b);
    //Division
    printf("\nAdd value : %f / %f = %f",a,b,a/b);
    //Power of
    printf("\nPower of : %f",pow(a,b));
    //Square root
    printf("\nSquare of a & b is : %f %f",sqrt(a),sqrt(b));

    return 0;

}
