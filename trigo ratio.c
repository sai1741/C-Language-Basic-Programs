#include<stdio.h>
#include<math.h>
int main(){
    float n;
    printf("enter value");
    scanf("%f",&n);
    printf("sin0=%f\ncos0=%f\ntan0=%f\nsec0=%f\ncosec0=%f\ncot0=%f",sin(n),cos(n),tan(n),cos(1/n),sin(1/n),tan(1/n));
}