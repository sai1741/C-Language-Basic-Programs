#include<stdio.h>
int main(){
    int A,B,C;
    printf("enter value 1   ");
    scanf("%d",&A);

    printf("enter value 2   ");
    scanf("%d",&B);

    C=A;
    A=B;
    B=C;
    
    printf(" A is %d and B is %d",A,B);
}