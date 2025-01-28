//ques-1  write a program to print the address of a variable. Use this address to get the value 
//of this variable.
//  #include<stdio.h> 
// #include<conio.h>

//  int main (){ 
// int a = 6 ;
// int *ptr;
// ptr = &a ;
// printf("the address of a variable is %u \n" , &a);
// printf("the  value of a variable is %d \n" , a);
// printf("the addresss of vairable a is %u \n " , ptr);
// printf("the value of variable a is %d \n" , *ptr);
// printf("the addresss of ptr is %u \n" , &ptr);
//      getch();
//      return 0 ;
// }

//ques-2 write a program having a variable i. Print the address of i. Pass this variable to a function  and
// prints its address . Are these address are same ? why ?

//  #include<stdio.h> 
// #include<conio.h>
// void printadd(int a){
//     printf("the address of variable a is %u \n" , &a);
// }
//  int main (){ 
//     int i ;
//     printf("the address of i  is %u \n" , &i);
// printadd(i);
//      getch();
//      return 0 ;
// }

//ques-3  write a program to change the value of a variable ten times of its current value .
// write a function and pass the value by refernce.

//  #include<stdio.h> 
// #include<conio.h>
// void swap (int *p ){
//     *p = (*p)*10;
// }
//  int main (){ 
//    int i = 3 ;
//    printf("%d \n" , i);
//     swap(&i);
//     printf("%d \n" , i);
//      getch();
//      return 0 ;
// }

//qus-4 write a program using a function which calculate the sum and average of two numbers 
// use pointers and print the value of sum and average in main().

//  #include<stdio.h> 
// #include<conio.h>
// void sumAndavg(int a , int b , int *sum , float *avg ){
//   *sum = a + b ;
//   *avg = (float)*sum/2 ;
// }
//  int main (){ 
//     int sum ; float avg ;
//     int i = 3 ;
//      int j = 6 ;
//      sumAndavg(i , j , &sum , &avg);
//      printf(" %d \n" , sum);
//      printf("%f \n" , avg);
//      getch();
//      return 0 ;
// }

/*ques-5  write a program to printthe value of a variable i by using  'pointer to pointer' type of a 
variable */

//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//     int i = 345 ;
//     int *ptr ;
//     int **ptr_ptr;
      
//       ptr = &i ;
//       ptr_ptr = &ptr ;
//       printf("the value of i is %d \n" , **ptr_ptr);
//      getch();
//      return 0 ;
// }

/*ques-6  try problem 3 using call by value and verify that it doesnt change the value 
of the said variable. */

//  #include<stdio.h> 
// #include<conio.h>
// void swap (int p ){
//   p = (p)*10; 
// }
//  int main (){
//     int i = 3 ;
//     printf("%d \n" , i);
//      swap(i);
//      printf("%d \n" , i);
    
//   getch();
//      return 0 ;
// }