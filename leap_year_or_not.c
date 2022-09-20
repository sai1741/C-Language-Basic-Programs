#include<stdio.h>
int main(){
    int leap_year,year;

    printf("enter year");
    scanf("%d",&year);

    if (year%4==0&&year%400==0)
    {
        printf("THIS IS LEAP YEAR");
    }
    else if (year%4==0&&year%100!=0)
    {
          printf("THIS IS LEAP YEAR");
    }
    else{
          printf("THIS IS NOT LEAP YEAR");
    }
}