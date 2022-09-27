#include<stdio.h>
int main(){
    int leap,year;
    printf("enter year");
    scanf("%d",&year);
    if (year%4==0)
    {
        if (year%100!=0)
        {
            printf(" leap year");
        }else if (year%100==0)
        {
        if (year%400==0)
        {
          printf("year is leap");
        }else{
            printf("year is not leap");
        }
        
        }
        
        
    }
    
}