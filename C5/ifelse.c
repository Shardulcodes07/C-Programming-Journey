/* Lec 5 If-else */
// Question 1 Take positive integer input and tell if it's even or odd
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("The Number %d is Even Number",number);
    }
    else{
        printf("The Number %d is odd Number",number);
    }
    return 0;
}