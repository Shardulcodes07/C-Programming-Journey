//Question 02: Take positive integer input and tell  if it is divisible by 5 or 3 but not 15
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n % 5 == 0 || n % 3 == 0){
        if(n % 15 != 0){
            printf("The number %d is divisible by 5 or 3 but not 15",n);
        }
        else{
            printf("The number %d is divisible by 15 ",n);
        }
    }
    else{
        printf("The number %d is not divisible by 5 or 3",n);
    }
    return 0;
}