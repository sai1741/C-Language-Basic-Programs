#include<stdio.h>
int main(){
    int number,num1,num2,num3,num4,num5,temp,rnum;
    printf("enter number");
    scanf("%d",&number);
    temp=number;
    num1=number%10;
    number=number/10;

      num2=number%10;
    number=number/10;

       num3=number%10;
    number=number/10;

       num4=number%10;
    number=number/10;

       num5=number%10;
    number=number/10;

    printf("%d\n%d\n%d\n%d\n%d\n",num1,num2,num3,num4,num5);
    rnum=num5*1+num4*10+num3*100+num2*1000+num1*10000;
    if(rnum==temp)
    {
        printf("it is same number");

    }
    else{
        printf("not same");
    }


}