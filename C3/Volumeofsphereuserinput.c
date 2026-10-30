/*4.1 Volume of Sphere (User input)*/
#include<stdio.h>
int main(){
    int radius;
    printf("Enter the Radius: ");
    scanf("%d",&radius);
    float pie;
    printf("Enter the value of pie: ");
    scanf("%f",&pie);
    float volume = 4 * pie * radius * radius *radius/3;
    printf("The Volume of Sphere is: %f",volume);
    return 0;
}