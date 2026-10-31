/*4.1 Ceiling function user input*/
#include<stdio.h>
#include<math.h>
int main(){
    float x;
    printf("Enter the Number here: ");
    scanf("%f",&x);
    x = ceil(x);
    printf("The Ceiling Value of the given number is %.2f",x);
    return 0;
}