#include<stdio.h>
int main(){
    char character;

    printf("enter character");
    scanf("%c",&character);

    if (character>=65&&character<=90)
    {
       printf("capital letter");
    }
    else  if (character>=97&&character<=122)
    {
       printf("small letter");
    }
    else  if (character>=48&&character<=57)
    {
       printf("digit ");
    }
    else {
        printf("symbols ");
    }
    
}