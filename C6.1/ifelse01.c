//01 Question: Wap to check positive negative or zero using simple if statement
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the Number: ");
    scanf("%d",&number);
    if (number > 0)
    {
        printf("Number is positive");
    }
    if (number < 0)
    {
        printf("Number is Negative");
    }
    if (number == 0)
    {
        printf("Number is Zero");
    }
    return 0;
}