//06 Question: If cost price and selling price is input through keyboard
//Wap to determine  seller made profit or loss
#include<stdio.h>
int main(){
    float costprice,sellingprice;
    printf("Enter the Cost price Here: $");
    scanf("%f",&costprice);
    printf("Enter the Selling price Here: $");
    scanf("%f",&sellingprice);
    if (sellingprice > costprice)
    {
        printf("The Seller has made profit");
    }
    else{
        printf("The Seller has made loss");
    }
    return 0;
}