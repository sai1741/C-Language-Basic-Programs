#include<stdio.h>
int main(){
int year,leap_year,normal_year,no_leap,y100,y400,total_days,extra_day;
    printf("enter any year  ");
    scanf("%d",&year);

    leap_year=year/4;

    y100=year/100;

    y400=year/400;

    no_leap=y100-y400;


    leap_year=leap_year-no_leap;


    normal_year=year-leap_year;


    total_days=(normal_year*365)+(leap_year*366);

            if (total_days%7==1)
            {
                printf("it is monday");
            }
            else if (total_days%7==2)
            {
                printf("it is tuesday");
            }
            else if (total_days%7==3)
            {
                printf("it is wednesday");
            }
            else if (total_days%7==4)
            {
                printf("it is thursday");
            }
            else if (total_days%7==5)
            {
                printf("it is friday");
            }
            else if (total_days%7==6)
            {
                printf("it is saturday");
            }
        else if (total_days%7==0)
            {
                printf("it is sunday");
            }
        
         


}         