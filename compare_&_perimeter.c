#include<stdio.h>
int main(){
    int area,perimeter,length,breadth;
    printf("enter length");
    scanf("%d",&length);

    printf("enter breadth");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if (area>perimeter)
    {
        printf("area is greater than perimeter");
    }
    else{
        printf("area is smaller than perimeter");
    }
    
}