//C program to check even or odd number using switch case
#include<stdio.h>
int main(){

   int number;
   for(;;){
   printf("Enter Any Number to check Even Or Odd::");
   scanf("%d",&number);

   switch(number%2==0){
   case 0:
       printf("%d is ODD..\n",number);
       break;
   case 1:
    printf( "%d is Even..\n",number);
    break;

   default:
    printf("wrong Input ! \n");

   }
   }
return 0;
}
