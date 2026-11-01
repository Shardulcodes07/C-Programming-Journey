//02 Question check if student has pass exam or not
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if(marks >= 300){
        printf("Student has pass the Exam");
    }
    else{
        printf("Student has Failed the Exam");
    }
    return 0;
}