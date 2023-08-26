//C program to find maximum between two numbers using switch case

#include<stdio.h>
int main(){

    int num1,num2;
    for(;;){
    printf("Enter Two Numbers:::");
    scanf("%d %d",&num1,&num2);

    switch(num1>num2){

 case 0:
    printf("%d is Maximum..\n",num2);
    break;
 case 1:
    printf("%d is Maximum..\n",num1);
    break;
 default:
    printf("wrong input!\n");



    }
    }

return 0;
}
