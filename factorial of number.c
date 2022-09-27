#include<stdio.h>
int main(){
    int number,factorial;
    printf("enter number");
    scanf("%d",&number);
     factorial=1;
    int i=number;
    while (i>0)
    {  
       factorial=factorial*i;
       if (i==1)
       {
        printf("factorial is  %d",factorial);
        break;}
        i--;
       
       
    }
    
}