#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,s;
    float ans;

    printf("enter sides of the triangle ");

    scanf("%d%d%d",&a,&b,&c);

    s=(a+b+c)/2;

    ans= sqrt((s)*(s-a)*(s-b)*(s-c));

    printf("area of triangle %f",ans);

 


}
