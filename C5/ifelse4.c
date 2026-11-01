//04 Question: WAP to determine wether the year is leap year or not USer input
#include<stdio.h>
int main(){
int Year;
    printf("Enter the Year: ");
    scanf("%d",&Year);
    if(Year % 4 == 0){

        printf("The Given Year %d is Leap Year",Year);
    }
    else{
        printf("The Given Year %d is not a Leap Year",Year);
    }
    return 0;
}