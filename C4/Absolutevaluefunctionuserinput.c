/*6.1 Absolute value user input*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int x;
    printf("Enter the Value here: ");
    scanf("%d",&x);
    x = abs(x);
    printf("The Absolute Value of the given number is %d",x);
    return 0;
}