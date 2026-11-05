//Question2: Given three points(x1,y1),(x2,y2),(x3,y3) write a program to
//check if all three ponts falls on same line in one straight line
#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter your x1: ");
    scanf("%d",&x1);
    printf("Enter your y1: ");
    scanf("%d",&y1);
    printf("Enter your x2: ");
    scanf("%d",&x2);
    printf("Enter your y2: ");
    scanf("%d",&y2);
    printf("Enter your x3: ");
    scanf("%d",&x3);
    printf("Enter your y3: ");
    scanf("%d",&y3);
    float m1 = (float) (y2 - y1)/(x2 - x1);
    float m2 = (float) (y3 - y2)/(x3 - x2);
    if (m1 == m2)
    {
        printf("They line on the same plane");
    }
    else{
        printf("They do not lie on same plane");
    }
    return 0;
}