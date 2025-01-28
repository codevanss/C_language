#include<stdio.h>
int main(){
  int A[3][3];
 printf("enter the elements in 1st matrix \n");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        printf("Sparse array is \n");
  for (int i = 0; i <= 2; i++)
  {
    for (int j = 0; j <= 2; j++)
    {
      printf("%d  \t", A[i][j]);
    }
    printf("\n");
  }
  printf("\n3-tuple matrix representation\n");
  printf("\nrow\tcolumn\tval\n");
  for (int i = 0; i <= 2; i++)
  {
    for(int j = 0 ; j <= 2 ; j++){
      if(A[i][j] != 0){
printf("%d\t%d\t%d\n" , i+1 ,j+1 , A[i][j]);
      }
    }
  }
    return 0 ;
}