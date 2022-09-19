#include<stdio.h>
int main(){
int year,leap_year,normal_year,no_leap,y100,y400,total_days,extra_day;
    printf("enter any year  ");
    scanf("%d",&year);

    /*consept of leap year,these year which are multiple of 4
     and for years which are multiple of 100 should divisible by 400 */

    leap_year=year/4; //calculate all leap year + non leap year like 100,200,300,500.....

    y100=year/100;//num of years multiple of 100

    y400=year/400;//num of leap year present in multiple of 100

    no_leap=y100-y400;//grace non leap year from y100 


    leap_year=leap_year-no_leap;//grace leap year


    normal_year=year-leap_year;//grace normal year 


    total_days=(normal_year*365)+(leap_year*366);// calculating total days

            if (total_days%7==1)    // if else condition
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
