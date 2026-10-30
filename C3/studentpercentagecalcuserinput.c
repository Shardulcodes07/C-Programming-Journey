/*6.1 Student calc user input*/
#include<stdio.h>
int main(){
    float physics,chemistry,maths,biology,Programming;
    printf("Enter your Physics marks: ");
    scanf("%f",&physics);
    printf("Enter your chemistry marks: ");
    scanf("%f",&chemistry);
    printf("Enter your Maths marks: ");
    scanf("%f",&maths);
    printf("Enter your Biology marks: ");
    scanf("%f",&biology);
    printf("Enter your programming marks: ");
    scanf("%f",&Programming);
    float percentage = (physics + chemistry + maths + biology + Programming)/5;
    printf("The Percentage of Student is %f",percentage);
    return 0;
}