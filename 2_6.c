#include <stdio.h>
int main()
{
    int n;
    int sum;
    printf("Enter the vlaue of n upto which sum is to be calculated ");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Sum of numbers upto %d is %d",n,sum);
    return 0;
}
