/*  ques _1 :- Create an array of 10 numbers verify using pointer arthmethic that (ptr+2) points to the third
element where ptr is a pointer pointing to the first element of the array */
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//     int arr[10];
//     //int *ptr = &arr[0] ;
//  int    *ptr =arr ;
//     ptr = ptr+2 ;
//     if(ptr==&arr[2]){
//         printf("These point to the same location \n ");
//     } 
//     else{
//         printf("These do not point to the same location \n");
//     }
//      getch();
//      return 0 ;
// }  
// QUES 3 -- write a program to create an array of 10 integers and store multiplication table of 5 in it.
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//     int mul[10];
//     for (int i = 0; i < 10 ; i++)
//     {
//         mul[i] =5*(i+1);
//     }
//      for (int i = 0; i < 10 ; i++){
//         printf("5X%d = %d \n" ,i+1 , mul[i]);
//      }
//      getch();
//      return 0 ;
// }
//Ques 4 -- Repeat problem 3 for a general input provide by the user using scanf 
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//        int mul[10];
//        int n;
//        scanf("%d" , &n);
//     for (int i=0 ; i < 10 ; i++)
//     {
//         mul[i] =n*(i+1);
//     }
//      for (int i = 0; i < 10 ; i++){
//         printf("%dX%d = %d \n" , n ,i+1 , mul[i]);
//      }
//      getch();
//      return 0 ;
// }
// QUES 5 -- write a program containing a function which reverse the array passed to it .
//  #include<stdio.h> 
// #include<conio.h>
// void reverse(int *arr , int n){
//     int temp;
// for (int i = 0; i < (n/2); i++)
// {
//     temp = arr[i];
//     arr[i] = arr[n-i-1];
//     arr[n-i-1] = temp ;
// }

// }
//  int main (){
//     int arr[]= {1,2,3,4,5,6,7};
//     reverse(arr , 7); 
//     for (int i = 0; i < 7; i++){
//         printf("The value of %d element is %d \n ", i ,arr[i]);
//     }
//      getch();
//      return 0 ;
// }
// QUES 6 --- Write a program containing function which counts the number of positive integers in an array 
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//     int size , i , a[10];
//     int positive_count = 0 , negative_count = 0 ;
//     printf("please enter the size of an array \n:");
//     scanf("%d" , size);

//     printf("please enter the array element \n");
//     for(i = 0 ; i<size ; i++){
//         scanf("%d" , &a[i]);
//     }
//     for(i = 0 ; i<size ; i++){
//         if(a[i] > 0){
//             positive_count++;
//             }else{
//                 negative_count++;
//             }
//     }
//      getch();
//      return 0 ;
// }
// QUES 7--- create an array of size 3X10 containing multiplication table of number 2,7,9.
//  #include<stdio.h> 
// #include<conio.h>
// void printtable(int *mul, int num , int n ){
//     printf("the multiplication table of %d is :\n" , num);
//     for (int i=0 ; i < n ; i++)
//     {
//         mul[i] =num*(i+1);
//     }
//      for (int i = 0; i < 10 ; i++){
//         printf("%dX%d = %d \n"  ,num ,i+1 , mul[i]);
//      }
//      printf("******************************\n\n");
// }

//  int main (){ 
//     int mul[3][10];
//     for (int i=0 ; i < 10 ; i++)
//     {
//         mul[0][i] =2*(i+1);
//     }
//      for (int i = 0; i < 10 ; i++){
//         printf("2X%d = %d \n"  ,i+1 , mul[0][i]);
//      }
//       for (int i=0 ; i < 10 ; i++)
//     {
//         mul[1][i] =7*(i+1);
//     }
//      for (int i = 0; i < 10 ; i++){
//         printf("7X%d = %d \n"  ,i+1 , mul[1][i]);
//      }
//       for (int i=0 ; i < 10 ; i++)
//     {
//         mul[2][i] =9*(i+1);
//     }
//      for (int i = 0; i < 10 ; i++){
//         printf("9X%d = %d \n"  ,i+1 , mul[2][i]);
//      }
//     // printtable(mul[0] , 2 ,10);
//     // printtable(mul[1] , 7 ,10);
//     // printtable(mul[2] , 9 ,10);
//      getch();
//      return 0 ;
// }
// QUES 8 -- REPEAT PROBLEM 7 FOR A CUSTOM INPUT GIVEN BY THE USER 
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//      int mul[1][10];
//      int num  , m , n  ;
//     //  printf("Enter the value of an array element \n");
//     //  scanf("%d and %d" , &m, &n);
//      printf("Enter the value of num\n");
//      scanf("%d" , &num);
//     for (int i=0 ; i < 10 ; i++)
//     {
//         mul[0][i] =num*(i+1);
//     }
//      for (int i = 0; i < 10 ; i++){
//         printf("%dX%d = %d \n", num  ,i+1 , mul[0][i]);
//      }
//      getch();
//      return 0 ;
// }
// QUES 9 ---create athree dimensional array and print the address of its element in increasing order.
 #include<stdio.h> 
#include<conio.h>
 int main (){ 
    int arr[2][3][4];
    for(int i=0; i<2 ; i++){
         for(int j=0; j<3 ; j++){
         for(int k=0;k<4 ; k++){
        printf("The address of arr[%d][%d][%d] is %u \n" , i , j , k , &arr[i][j][k]);
    }}}
     getch();
     return 0 ;
}