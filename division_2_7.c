#include<stdio.h>
int main()
{
    int a,b;
    float divi;
    printf("Enter any two numbers ");
    scanf("%d%d",&a,&b);
    divi=(float)a/b;
    printf("Result of division= %.3f",divi);
    return 0;
}
