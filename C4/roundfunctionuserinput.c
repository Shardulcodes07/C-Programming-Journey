/*3.1 Roud function user input*/
#include<stdio.h>
#include<math.h>
int main(){
    float x;
    printf("Enter the Decimal Number: ");
    scanf("%f",&x);
    x = round(x);
    printf("The Round Figure of function is %f",x);
    return 0;
}