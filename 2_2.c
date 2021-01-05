#include <stdio.h>
int main()
{
    int ch;
    float temp,result;
    printf("Enter 1 to convert from Celsius to Fahrenheit:");
    printf("\n");
    printf("Enter 2 to convert from Fahrenheit to Celsius:");
    printf("\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f",&temp);
        result=temp*1.8+32;
        printf("Temperature in Fahrenheit: %.1f F",result);
    }
    else if(ch==2)
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f",&temp);
        result=(temp-32)/1.8;
        printf("Temperature in Celsius: %.1f C",result);
    }
    else
    {
        printf("Wrong Input");
        printf("\n");
        printf("Please try again!");
        
    }
    return 0;
}
