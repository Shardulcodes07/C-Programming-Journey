//02 Question: Take positive integer input and tell if it is divisible by 5 or 3
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num % 5 == 0 || num % 3 == 0)
    {
        printf("The Number %d is divisible by 5 or 3",num);
    }
    else{
        printf("The Number %d is not divisible by 5 or 3",num);
    }
    
    return 0;
}