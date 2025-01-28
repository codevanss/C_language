//  #include<stdio.h> 
// #include<conio.h>
// //sum is a function which takes a and b as a input and returns an integers as an output 
// int sum(int a , int b); // function prototype declaration
//  int main (){ 
//     sum(2,5); // function call
//      getch();
//      return 0 ;
// }
// int sum (int a , int b){
//     int result;
//     result = a + b ;
//     return result;
// } // the above code is run but not show any value because we don't print any stuff

 #include<stdio.h> 
#include<conio.h>
int sum(int a , int b);
 int main (){ 
    int c;
    c = sum(2 , 5);
    printf("The value of c is %d \n" , c);
     getch();
     return 0 ;
}
int sum (int a , int b){
int result ;
result = a + b ;
return result ;
}