#include <stdio.h>
int main()
{
    int ch,dist;
    float result;
    printf("Enter 1 to convert from kilometer to meter:");
    printf("\n");
    printf("Enter 2 to convert from meter to kilometer:");
    printf("\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Enter the distance in kilometer: ");
        scanf("%d",&dist);
        result=dist*1000;
        printf("Distance in kilometer: %.0f kilometers",result);
    }
    else if(ch==2)
    {
        printf("Enter the distance in meter: ");
        scanf("%d",&dist);
        result=(float)dist/1000;
        printf("Distance in meter: %.2f meters",result);
    }
    else
    {
        printf("Wrong Input");
        printf("\n");
        printf("Please try again!");
        
    }
    return 0;
}
