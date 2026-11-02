//02 Question: Wap to check whether character is alphabet or not
#include<stdio.h>
int main(){
    char Ch;
    printf("Enter any Character: ");
    scanf("%c",&Ch);
    if ((Ch >= 'a' && Ch >= 'z')|| (Ch >= 'A' && Ch>= 'Z'))
    {
        printf("Character is an Alphabet");
    }
    else{
        printf("Character is not Alphabet");
    }
    return 0;
}