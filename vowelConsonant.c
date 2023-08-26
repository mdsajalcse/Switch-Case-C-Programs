//Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main(){

    char ch;

    printf("Enter Any character to check vowel or consonant::");
    scanf("%c",&ch);

    switch(ch){
    case 'a':
        printf("vowel\n");
        break;
    case 'e':
        printf("Vowel\n");
        break;
    case 'i':
        printf("vowel\n");
        break;
    case 'o':
        printf("vowel\n");
        break;
    case 'u':
        printf("vowel\n");
        break;
    case 'A':
        printf("vowel\n");
        break;
    case 'E':
        printf("Vowel\n");
        break;
    case 'I':
        printf("vowel\n");
        break;
    case 'O':
        printf("vowel\n");
        break;
    case 'U':
        printf("vowel\n");
        break;
    default:
        printf("consonant\n");


    }

return 0;

}
