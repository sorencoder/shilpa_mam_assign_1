#include <stdio.h>
int main()
{
    int p,t;
    float r,si=1;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the rate: ");
    scanf("%f",&r);
    printf("Enter the time in years: ");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("Simple Interest: Rs. %.2f",si);
    return 0;
}
