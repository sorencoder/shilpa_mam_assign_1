#include<stdio.h>
int main()
{
    float a;
    char str[20];
    printf("Enter the name of the student: ");
    gets(str);
    printf("Enter the percentage of the student: ");
    scanf("%f",&a);
    if(a>60)
    printf("%s is eligible for campusing",str);
    else
    printf("%s is not eligible for campusing",str);
    return 0;
}
