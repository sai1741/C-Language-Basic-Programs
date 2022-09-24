#include<stdio.h>
int main(){
    int side_a,side_b,side_c;
    printf("enter 3 sides of triangle");
    scanf("%d%d%d",&side_a,&side_b,&side_c);
    if (( side_c<=side_a+side_b)||(side_a<= side_c+side_b)||(side_b<=side_a+side_c))
    {
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
}