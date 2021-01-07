#include <stdio.h>
int main()
{
    int i,j, n=3, fact = 1;
    // printf("Enter a number:\n");
    // scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
         for(j=1;j<=i;j++)
         {
         fact = fact*j;
         }
         printf("Factorial of %d is %d\n", j, fact);
    }     
    
    return 0;
}
