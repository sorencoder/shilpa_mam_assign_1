#include <stdio.h>
int main()
{
    int sum,diff,prod;
    float divide;
    int a=9;
    int b=5;
    sum=a+b;
    if(a>b)
    diff=a-b;
    else
    diff=b-a;
    prod=a*b;
    divide=a/b;
    printf("sum of %d and %d is: %d",a,b,sum);
    printf("\n");
    printf("difference between %d and %d is: %d",a,b,diff);
    printf("\n");
    printf("product of %d and %d is: %d",a,b,prod);
    printf("\n");
    printf("division of %d by %d is: %.2f",a,b,divide);
    return 0;
}
