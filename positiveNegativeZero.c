//C program to check whether a number is positive, negative or zero using switch case.

#include<stdio.h>
int main(){

   int number;
   for(;;){
   printf("Enter Any Number to check Positive , Negative or Zero::");
   scanf("%d",&number);

   switch(number>0){
   case 1:
       printf("%d is Positive..\n",number);
       break;
   case 0:
    printf( "%d is Negative or Zero..\n",number);
    break;

   default:
    printf("wrong Input ! \n");

   }
   }
return 0;
}
