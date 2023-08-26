//Write a C program print total number of days in a month using switch case.

#include<stdio.h>
int main(){

    int totalNumberOfDaysMonth;
    for(;;){
    printf("Enter Month(1-12)::");
    scanf("%d",&totalNumberOfDaysMonth);

    switch(totalNumberOfDaysMonth){
    case 1:
        printf("January is 31 Days..\n");
        break;
    case 2:
        printf("February is 28/29 Days..\n");
        break;
    case 3:
        printf("March is 31 Days..\n");
        break;
    case 4:
        printf("April is 30 Days..\n");
        break;
    case 5:
        printf("May is 31 Days..\n");
        break;
    case 6:
        printf("June is 30 Days..\n");
        break;
    case 7:
        printf("July is 31 Days..\n");
        break;
    case 8:
        printf("August is 31 Days..\n");
        break;
    case 9:
        printf("September in 30 Days..\n");
        break;
    case 10:
        printf("October in 31 Days..\n");
        break;
    case 11:
        printf("November in 30 Days..\n");
        break;
    case 12:
        printf("December in 31 Days..\n");
        break;
    default:
        printf("Invalid ! Days of The Month key Input..please try again..\n");

    }
    }

return 0;

}

