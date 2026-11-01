//07 Question: Take positive int tell if it is a three digit or not
#include<stdio.h>
int main(){
    int number;
    printf("Enter the Number: ");
    scanf("%d",&number);
    if(number >= 100 && number <=999){
        printf("The Number %d is three digit number",number);
    }
    else{
        printf("The Number %d is not a three digit number",number);
    }
    return 0;
}