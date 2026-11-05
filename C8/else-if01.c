//01 Question: Take input percentage of a student and print the grade according to marks
#include <stdio.h>
int main() {
    int n;
    printf("Enter your marks: ");
    scanf("%d", &n);

    if (n >= 91 && n <= 100) {
        printf("A GRADE (PASS)");
    }
    else if (n >= 81 && n < 91) {
        printf("B GRADE (PASS)");
    }
    else if (n >= 60 && n < 81) {
        printf("C GRADE (PASS)");
    }
    else if (n >= 0 && n < 60) {
        printf("F GRADE (FAIL)");
    }
    else {
        printf("Invalid marks");
    }
    return 0;
}