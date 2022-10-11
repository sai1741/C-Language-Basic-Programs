#include<stdio.h>
int main()
{
    int a,b,c,sun;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {   if (j==i)
        {
            continue;

        }
        
            for (int k = 1; k < 4; k++)
            {       
                if (k==j)
                {
                    continue;
                }
                
                a=i*100;
                b=j*10;
                c=k*1;

                sun=a+b+c;
                printf("%d\n",sun);
            }
            
        }
        
    }
    
}