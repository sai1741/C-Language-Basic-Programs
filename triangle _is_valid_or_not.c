#include<stdio.h>
int main(){
    int ang1,ang2,ang3, total_ang;
    printf("enter 3 angles");
    scanf("%d%d%d",&ang1,&ang2,&ang3);

    total_ang=ang1+ang2+ang3;

    if (total_ang==180)
    {
        printf("valid traingle");
    }
    else{
        printf("invalid traingle");
    }
    

}