/*8.4 Trigonometric function  user input(cos)*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float x;
    printf("Enter the Value of cos here: ");
    scanf("%f",&x);
    x = cos(x* 3.14159265/180);
    printf("The Trigonometric Function of the given number is %f",x);
    return 0;
}