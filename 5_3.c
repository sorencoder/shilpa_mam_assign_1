// program to find factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int n;
    int fact=1;
    printf("Enter the number to find its factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d",n,fact);
    return 0;
}
