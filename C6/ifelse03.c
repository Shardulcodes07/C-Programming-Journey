//03 Take 3 number input and tell if it can be the side of triangle
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the First side: ");
    scanf("%d",&a);
    printf("Enter the Second side: ");
    scanf("%d",&b);
    printf("Enter the third side: ");
    scanf("%d",&c);
    if((a + b)> c && (b + c)> a && (a + c)> b)
    {
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}