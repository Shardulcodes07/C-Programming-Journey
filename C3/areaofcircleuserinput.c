/*5.1 The area of circle (User input)*/
#include<stdio.h>
int main(){
    int radius;
    printf("Enter the Radius: ");
    scanf("%d",&radius);
    float pie;
    printf("Enter the value of pie: ");
    scanf("%f",&pie);
    float area = radius * radius * radius;
    printf("The area of circle is %f",area);
    return 0;
}