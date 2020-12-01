#include <stdio.h>

int main()
{
    int p,r,t;
    float si=1;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the rate: ");
    scanf("%d",&r);
    printf("Enter the time: ");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("Simple Interest: %.2f",si);
    return 0;
}
