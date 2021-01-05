#include <stdio.h>

int main()
{
    int n,sum;
    printf("Enter the vlaue of n upto which sum is to be calculated: ");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("%d",sum);
    return 0;
}
