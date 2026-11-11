//Age Category Checker 🎂
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age < 13){
        printf("Child");
    }
    else if(age <17){
        printf("Tennager");
    }
    else{
        printf("Adult");
    }
    return 0;
}