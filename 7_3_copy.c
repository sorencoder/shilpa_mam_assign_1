#include <stdio.h>
int main() 
{
    int i,j,k;
    int n;
    // printf("Enter the value of n ");
    // scanf("%d",&n);
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        // for(k=1;k<=i;k++)
        // {
        // printf("* ");
        // }
        printf("\n");
    }
    return 0;
}
