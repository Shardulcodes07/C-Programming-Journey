/*8.5 Trigonometric function  user input(tan)*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float x;
    printf("Enter the Value of tan here: ");
    scanf("%f",&x);
    x = tan(x* 3.14159265/180);
    printf("The Trigonometric Function of the given number is %f",x);
    return 0;
}