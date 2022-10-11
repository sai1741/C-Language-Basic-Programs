#include<stdio.h>
int main()
{
    for (int i = 2; i <=300; i++)
    {
         int count=0;
        for (int j = 1; j <=100; j++)
        {
           
            if (i%j==0)
            {
                count++;

            }
          
            
        }
          if (count==2)
            {
                printf("%d\n",i);
            }
    }
    
}