//01.1 Question: Wap to check positive negative or zero using if else
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
    else if (number < 0)
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is Zero");
    }
    return 0;
}