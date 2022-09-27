#include<stdio.h>
int main(){
    int num,num1,num2,num3,arm;
    printf("enter number");
    scanf("%d",&num);
    num3=num;
    num2=0;
    int i=1;
    while (i<=3)
    {
      num1=num%10;
      num=num/10;
      
      
      num2=num2+num1*num1*num1;
      i++;
    }
    printf("%d",num2);
    if(num2==num3){
      printf("number is armstrong number");
    }
    
}