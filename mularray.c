#include<stdio.h> 
#include<conio.h>
 int main (){ 
    int dis[2][3];
    int i;
    int j ;
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j <3 ; j++)
        {
        printf("Enter value for dis[%d][%d]" ,  i, j);
        scanf("%d" , &dis[i][j]);
        }
    }
    printf("Two dimensional array element : \n");
    for(i=0 ;i<2 ; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("%d" , dis[i][j]);
            if(j==2){
                printf("\n");
            }
        }
        
    }

     getch();
     return 0 ;
}