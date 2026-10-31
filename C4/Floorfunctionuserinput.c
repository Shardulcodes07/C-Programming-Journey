/*5.1 Floor Function  user input*/
#include<stdio.h>
#include<math.h>
int main(){
    float x;
    printf("Enter the Value: ");
    scanf("%f",&x);
    x = floor(x);
    printf("The Floor Function of the Given value is %f",x);
    return 0;
}