#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int n;
    int k = 0;
    // const=1;
    printf("Enter the number of row you want: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++,k=0)
    {
        for ( j = 1; j <=n-i; j++)
        {
             printf("  ");  //two space given
        }
        while(k!=2*i-1)
        {
            printf("%d ",i);
            k++;
        }
        
        printf("\n");
        
    }
return 0;
}
