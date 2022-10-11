#include<stdio.h>
int main(){
    for (int i = 1; i < 31; i++)
    {
        for (int j = 1; j < 31; j++)
        {
            for (int k = 1; k < 31; k++)
            {
                if (i*i==j*j+k*k)
                {
                    printf("pythagorean triplet is %d %d %d\n",i,j,k);
                }
                
            }
            
        }
        
    }
    
}