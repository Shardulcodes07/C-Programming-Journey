//Ques print the table of n here n is an integer which user input
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i<=10;i++)
    {
        printf("%d\n",i * n);
    }
    
    return 0;
}