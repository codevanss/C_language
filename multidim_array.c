//  #include<stdio.h> 
// #include<conio.h>
//  int main (){
//     int n_student=3;
//     int n_subject = 5 ;
//     int marks[3] [5] ; 
//     for(int i =0 ; i<n_student ; i++){
//         for (int j = 0; j < n_subject; j++)
//         {
//             printf("Enter the marks of student %d in sunject %d \n" , i+1 , j+1);
//             scanf("%d" , &marks[i][j]);
//         }
        
//     }
//      for(int i =0 ; i<n_student ; i++){
//         for (int j = 0; j<n_subject; j++)
//
//        {
//             printf("The marks of student %d in sunject %d is  : %d \n" , i+1 , j+1 , marks[i][j]);
//     }}
//      getch();
//      return 0 ;
// }

//QUICK QUIZ :- create a 2D array by taking input from the user . write a display function to print the content 
//              of this 2D aaray on screen .
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
 