#include<stdio.h>
int main(){
    int worked_hour,extra_hour,overtime_pay;
    int i=1;
    while (i<=10) //over pay for 10 worker
    {
        printf("enter working hour");
        scanf("%d",&worked_hour);


        if(worked_hour>=40)
        {
        extra_hour=worked_hour-40;
        overtime_pay=extra_hour*12;
        printf("overtime pay is %d\n",overtime_pay);

        }
        else{
            printf("enter hour more than 40");
        }
    i++;
    }
    
}