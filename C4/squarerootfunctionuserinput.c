/*1.1 Square root function user input*/
#include<stdio.h>
#include<math.h>
int main(){
    float x;
    printf("Enter the Number: ");
    scanf("%f",&x);
    x = sqrt(x);
    printf("The Square root Function of the given number is %f ",x);
    return 0;
}