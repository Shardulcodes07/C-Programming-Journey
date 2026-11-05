//03 Question: Given a point(x,y)wap to find out if it lies on x-axis,y-axis
// or at the origin (0,0)
#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the coordinates: ");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) {
        printf("The point lies at the origin");
    }
    else if (x == 0) {
        printf("The point lies on the Y-axis");
    }
    else if (y == 0) {
        printf("The point lies on the X-axis");
    }
    else {
        printf("The point lies on neither axis");
    }
    return 0;
}