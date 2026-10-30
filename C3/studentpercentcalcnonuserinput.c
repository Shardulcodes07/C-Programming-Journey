/*6. Student percentage calcc(non user input)*/
#include<stdio.h>
int main(){
    float physcis = 100;
    float chemistry = 77;
    float maths = 93;
    float biology = 90;
    float C = 97;
    float percentage = (physcis + chemistry + maths + biology + C)/5;
    printf("The percantage of student is %f",percentage);
    return 0;
}