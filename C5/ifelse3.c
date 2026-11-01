//03 Question: Take positive input and tell if it is divisible by 5 or not
#include<stdio.h>
int main(){
    int Number;
    printf("Enter the number: ");
    scanf("%d",&Number);
    if(Number % 5 == 0){
        printf("The Given Number %d is Divisible by 5",Number);
    }
    else{
        printf("The Given Number %d is not Divisible by 5",Number);
    }
    return 0;
}