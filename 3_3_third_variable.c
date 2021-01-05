#include<stdio.h>
int main()
{
    int a,b;
    int c;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swaping:\n");
    printf("a=%d",a);
    printf("\n");
    printf("b=%d",b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swaping:\n");
    printf("a=%d",a);
    printf("\n");
    printf("b=%d",b);
    return 0;
}
