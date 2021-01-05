#include<stdio.h>
int main()
{
    float a;
    int b;
    int c;
    printf("Program to add 10 to the integer value if floating point number is greater than 3.14\n");
    printf("Enter a floating point number: ");
    scanf("%f",&a);
    printf("Enter a Integer number: ");
    scanf("%d",&b);
    if(a>3.14)
    b=b+10;
    printf("Value of Integer: %d",b);
    printf("\nValue of floating point number: %f",a);
    return 0;
}
