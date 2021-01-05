#include<stdio.h>
int main()
{
    int a,b,c;
    int d;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    d=a;
    else if(b>a && b>c)
    d=b;
    else
    d=c;
    printf("Greatest numbers: %d",d);
    return 0;
}
