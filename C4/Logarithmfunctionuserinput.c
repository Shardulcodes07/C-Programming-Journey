/*7.1 Logarithm Function  user input*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float x;
    printf("Enter the Value here: ");
    scanf("%f",&x);
    x = log(x);
    printf("The Logarithm of the given number is: %f",x);
    return 0;
}