 #include<stdio.h> 
#include<conio.h>


 int main (){ 
int x = 2 ;
int y = 3 ;

// printf("the value of 3*x-8*y is %d \n" , 3*x-8*y); // operator precedence -60 //
//printf("the value of 3*x-8*y is %d \n" , 3*(x-8*y)); //-284 //
printf("the value of 8*y / 3*x is %d \n" , 8*y / 3*x ); // 8*3 / 3*2 = 24/6 will you give wrong answwer
// this equation shows 8*3 and then divide by 3 then multiply by 2 = 16//



getch();
     return 0 ;
}