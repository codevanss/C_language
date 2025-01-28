#include<stdio.h>
int main()
{
    
    int matr[6][6],sum=0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i==j || i+j==6)
            {
                sum+=matr[i][j];
            }
            
        }
        
    }
    printf("the sum is %d \n",sum);
    


    return 0;
}
