#include <stdio.h> 
int main() 
{ 
   char str[20]; 
   char str1[30];
   printf("Enter your name: ");
   gets(str); 
   printf("Enter your address: ");
   gets(str1);
   printf("In same line: ");
   printf("Name: %s and Address: %s", str,str1); 
   printf("\nIn different line:");
   printf("\nName: %s", str);
   printf("\nAddress: %s",str1);
   return 0; 
}
