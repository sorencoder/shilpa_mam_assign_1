#include<stdio.h>
int main()
{
    int num;
    int avg;
    int avgwic;
    int wic;
    char str[20];
    char ch;
    printf("Enter the name of the player: ");
    gets(str);
    printf("Whether the player has completed the 100 inning?");
    printf("\nPress 'Y' for yes or 'N' for no");
    printf("\n Enter your choice: ");
    scanf("%c",&ch);
    if(ch=='Y'||ch=='y')
    {
        printf("What is the average scoring of the player in each match? ");
        scanf("%d",&avg);
        printf("Total wickets taken? ");
        scanf("%d",&wic);
        printf("What is the average wickets taken per match? ");
        scanf("%d",&avgwic);
        if(avg>=35&&avgwic>=2&&wic>=50)
        printf("%s is all rounder player",str);
        else
        printf("%s is not a all rounder player",str);
    }
    else
    printf("%s is Novice player",str);
    return 0;
}
