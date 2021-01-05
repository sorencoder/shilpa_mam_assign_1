#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, times, CI;
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &times);

    printf("Enter rate: ");
    scanf("%f", &rate);

    CI = principle* (pow((1 + rate / 100), times));
    printf("Compound Interest = Rs. %.2f", CI);

    return 0;
}
