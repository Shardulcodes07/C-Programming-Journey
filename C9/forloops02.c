// Print hello world n times,Take n as input
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("HELLO WORLD\n");
    }
    return 0;
}