//Positive or negative number - project 1
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number > 0){
        printf("The number is Positive");
    }
    else if(number < 0){
        printf("The number is negative");
    }
    else{
        printf("The number is Zero");
    }
    return 0;
}