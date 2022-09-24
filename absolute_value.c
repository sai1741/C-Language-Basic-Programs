#include<stdio.h>
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);
    if (num>=0)
    {
        printf("absolute value is  %d",num);
    }
    else{
           printf("absolute value is  %d",num*-1);
    }
}
