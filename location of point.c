#include<stdio.h>
int main(){
    int x,y;
    printf("enter x");
    scanf("%d",&x);

        printf("enter y");
    scanf("%d",&y);

    if (y==0&&x!=0)
    {
        printf("point lies on x axis");
    }
    else if (x==0&y!=0)
    {
          printf("point lies on y axis");
    }
    else if (x==0&&y==0)
    {
          printf("point lies on origin ");
    }
    else{
          printf("point lies in the plane ");
    }
    
}