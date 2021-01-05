#include <stdio.h>
int main()
{
    int BS;
    float GS;
    printf("Enter the Basic Salary: ");
    scanf("%d",&BS);
    float DA=0.16*BS; //16/100 of Basic Salary 
    float TA=0.05*BS; //5/100 of Basic Salary
    GS=BS+DA+TA;
    printf("Gross Salary: Rs. %.2f",GS);
    return 0;
}
