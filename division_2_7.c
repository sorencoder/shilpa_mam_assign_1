#include<stdio.h>
int main()
{
    int a,b;
    float divide;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    divide=(float)a/b;
    printf("Division result upto 3 digits decimal: %.3f",divide);
    return 0;
}
