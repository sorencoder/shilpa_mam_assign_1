#include<stdio.h>
int main()
{
    char str[20];
    char grade;
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int total=0;
    float avg=0.00;
    printf("Enter the name of the student: ");
    gets(str);
    printf("Enter the marks of Mathematics ");
    scanf("%d",&sub1);
    printf("Enter the marks of Physics ");
    scanf("%d",&sub2);
    printf("Enter the marks of Chemistry ");
    scanf("%d",&sub3);
    printf("Enter the marks of Biology ");
    scanf("%d",&sub4);
    printf("Enter the marks of English ");
    scanf("%d",&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    avg=(float)total/5;
    if(avg>=90)
    grade='A';
    else if(avg<90 && avg>=60)
    grade='B';
    else if(avg<60 && avg>=40)
    grade='C';
    else if(avg<40 && avg>=30)
    grade='D';
    else grade='F';
    printf("Name of the student: %s",str);
    printf("\nTotal marks obtained: %d",total);
    printf("\nAverage: %.2f",avg);
    printf("\nGrade: %c",grade);
    return 0;
}
