#include<stdio.h>
int main(){

        int A[3][3],B[3][3],E[3][3],C[3][3],D[3][3];

        printf("enter the elements in 1st matrix \n");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        printf("enter the elements in 2nd matrix \n");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                scanf("%d",&B[i][j]);
            }
        }
       
        //------------------------------------------------
        //logic  let r1=2,r2=3,c1=3,c2=4
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                E[i][j]=0;
                for (int k = 0; k < 3; k++)
                {
                    E[i][j]=E[i][j]+ A[i][k]*B[k][j];
                }
               
            }  
        }
       // -------------------------------------------------
        printf("the resultant matrix is :\n");
        for(int i=0;i<3;i++)
        {  
            for(int j=0;j<3;j++)
            {
                printf(" %d \t",E[i][j]);
            }
            printf("\n");
        }


    return 0;
}