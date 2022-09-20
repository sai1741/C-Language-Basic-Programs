#include<stdio.h>
#include<math.h>
int main(){
   float a,b,A,B,ans;
    printf("enter latitude\n");
    scanf("%f%f",&a,&b);

    printf("enter longitude\n ");
    scanf("%f%f",&A,&B);

    ans=3963*acos(sin(a)*sin(b)+cos(a)*cos(b)*cos(A-B));

    printf("distance is %f",ans);

}