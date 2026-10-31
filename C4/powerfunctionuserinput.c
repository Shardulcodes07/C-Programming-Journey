//2.1 Power function user input
#include<stdio.h>
#include<math.h>
int main(){
    float base,exponent,result;
    printf("Enter the base number: ");
    scanf("%f",&base);
    printf("Enter the Power: ");
    scanf("%f",&exponent);
    result = pow(base,exponent);
    printf("%.2f raised to the power of %.2f is %.2f",base,exponent,result);
    return 0;
}