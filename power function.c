#include<stdio.h>
int main(){
    int num1,num2,value;
    printf("enter number");
    scanf("%d",&num1);
    printf("enter number");
    scanf("%d",&num2);
    int i=num2;
    while (i>1)
    {
        value=num1*num1;
        printf("value is %d",value);
        i--;
    }
    
}