/*8. Trigonometric function non user input(sin)*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float x = 45;
    x = sin(x * 3.14159265/180);
    printf("The Trigonometric Function of the given number is %f",x);
    return 0;
}