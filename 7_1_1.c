#include <stdio.h>
int main() 
{
    int i,j,k;
    // int n;
    // printf("Enter the value of n ");
    // scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        // for(k=1;k<=i;k++)
        // {
        // printf("*");
        // }
        printf("\n");
    }
    return 0;
}
