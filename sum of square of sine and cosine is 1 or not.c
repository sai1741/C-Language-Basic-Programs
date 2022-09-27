#include<stdio.h>
#include<math.h>
int main(){
    int angle;
    printf("enter angle");
    scanf("%d",angle);
    if (sin(angle)*sin(angle)+cos(angle)*cos(angle)==1)
    {
       printf("sum of square of sine and cosine is 1");
    }
    else{
        printf("sum of square of sine and cosine is not 1");
    }
}