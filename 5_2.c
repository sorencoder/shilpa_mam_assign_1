#include<stdio.h>
int main()
{
    int n;
    int i;
    int sum=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
