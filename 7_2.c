#include <stdio.h>
int main() 
{
    int i,j,k=1;
    // int n;
    // printf("Enter the value of n ");
    // scanf("%d",&n);
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        // for(k=1;k<=i;k++)
        // {
        // printf("*");
        // }
        printf("\n");
    }
    return 0;
}
