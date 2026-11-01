//05 Question: Take input int and print absoulte value
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number < 0)
    {
        number = number * (-1);
    }
    printf("The Absoulte value of integer is: %d",number);
    return 0;
}