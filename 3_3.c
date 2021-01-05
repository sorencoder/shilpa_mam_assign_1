#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swaping:\n");
    printf("a=%d",a);
    printf("\n");
    printf("b=%d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swaping:\n");
    printf("a=%d",a);
    printf("\n");
    printf("b=%d",b);
    return 0;
}
