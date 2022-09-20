#include<stdio.h>
#include<math.h>
int main(){
    float wcf,t,v;
    printf("enter temperature  ");
    scanf("%f",&t);
    printf("enter wind velocity  ");
    scanf("%f",&v);

    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);

    printf("windchill facter is  %f",wcf);
}