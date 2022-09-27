#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
        printf("%d is greatest number",a);
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
        printf("%d is greatest number",b);
        }
    }
        else if (c>a)
    {
        if (c>b)
        {
        printf("%d is greatest number",c);
        }
    }
    
}
