//Switch-Case-C-Programs
//Write a C program to print day of week name using switch case.
#include<stdio.h>
int main(){

    int daysOfWeekName;
    for(;;){
    printf("Enter Week(1-7)::");
    scanf("%d",&daysOfWeekName);

    switch(daysOfWeekName){
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    default:
        printf("Invalid ! Days of The Week key Input..please try again..\n");

    }
    }

return 0;

}

