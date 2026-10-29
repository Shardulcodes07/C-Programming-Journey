/*4.1 Operator in C*/
//  user input
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the First number: ");
    scanf("%d",&x);
    printf("Enter the Second number: ");
    scanf("%d",&y);
    printf("Addition = %d\n",x+y);
    printf("Subtraction = %d\n",x-y);
    printf("Multiplication = %d\n",x*y);
    printf("Division = %d\n",x/y);
    printf("Modulus = %d",x%y);
    return 0;
}