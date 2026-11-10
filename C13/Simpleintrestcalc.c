//Project 2- Calculating simple intrest
#include<stdio.h>
int main(){
    float principal,rate,time;
    printf("Enter the principal: ");
    scanf("%f",&principal);
    printf("Enter the rate: ");
    scanf("%f",&rate);
    printf("Enter the time: ");
    scanf("%f",&time);
    float simple_intrest = (principal * rate * time)/100;
    printf("The rate of intrest is %f",simple_intrest);
    return 0;
}