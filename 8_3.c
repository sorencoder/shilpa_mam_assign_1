#include <stdio.h>
int main() 
{
    int i,j;
    // int k;
    // int n;
    // printf("Enter the value of n ");
    // scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        char character = 65;
        for(j=1;j<=i;j++)
        {
            char c = (char)character;
            printf("%c",c);
            character++;
        }
        // for(k=1;k<=i;k++)
        // {
        // printf("*");
        // }
        printf("\n");
    }
    return 0;
}
