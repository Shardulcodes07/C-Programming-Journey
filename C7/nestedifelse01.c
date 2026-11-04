//Question 01 : Take positive integer and tell if it is divisible by 5 and 3
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n % 5 == 0) {
        if (n % 3 == 0) {
            printf("The number %d is divisible by 5 and 3", n);
        }
        else {
            printf("The number %d is not divisible by 5 and 3", n);
        }
    } 
    else {
        printf("The number %d is not divisible by 5 and 3", n);
    }

    return 0;
}