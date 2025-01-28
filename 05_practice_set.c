//  #include<stdio.h> 
// #include<conio.h> //ques 1 
// float average(float a , float b , float c);
//  int main (){ 
// int a , b ,c ;
// printf("enter the value  of a \n");
// scanf("%d" , &a);
// printf("enter the value  of b \n");
// scanf("%d" , &b);
// printf("enter the value  of c \n");
// scanf("%d" , &c);

// printf("the average of three digit is %f  \n" , average(a ,b ,c));
//      getch();
//      return 0 ;
// }
// float average(float a , float b , float c){
//     float result;
//     result = (a + b + c)/3;
//     return result;
// }

// QUES 3 -----
//  #include<stdio.h> 
// #include<conio.h>
// float force (float mass);
//  int main (){ 
//     float m ; 
//     printf("Enter the value of mass in kgs \n");
//     scanf("%f" , &m);
//     printf("the value of force in newton is %f \n ", force(m));
//      getch();
//      return 0 ;
// }
// float force (float mass){
//     float result = mass*9.8 ;
//     return result;
// }

// ques 2 ----
//  #include<stdio.h> 
// #include<conio.h>
// float temperature(float celcius);
//  int main (){ 
//     float c;
//     printf("Enter the value of celcius \n ");
//     scanf("%f" , &c);

//     printf("The value after conversion is %f \n" , temperature(c));
//      getch();
//      return 0 ;
// }
// float temperature(float celcius){
//     float result = ((celcius*9)/5)+ 32;
//     return result ;
// }

//QUES 4 ---- write a program using recursion to calculate nth element of fibonacci series
// Fibonacci series => 0,1,1,2,3,5,8,13,21,34,55.......(sum of last two number)
//  #include<stdio.h> 
// #include<conio.h>
// int fibo(int num);
//  int main (){ 
//     int num , result;
//     printf("Enter the nth number in fibonacci series \n");
//     scanf("%d" , &num);

//     if(num<0){
//         printf("fibonacci of negative number is not possible \n");
//     }
//     else{
//         result = fibo(num);
//         printf("the %d number in fiboacci series is %d \n" , num , result);
//     }
//      getch();
//      return 0 ;
// }
// int fibo(int num){
// if(num==0){
//     return 0;
// }
// else if (num==1){
//     return 1 ;
// }
// else{
//     return(fibo(num-1) + fibo(num - 2));
// }
// }

//QUES 5 ------
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//     int a = 3; 
//     printf("%d %d %d \n" , a , ++a , a++);
//      getch();
//      return 0 ;
// } // compiler takes the arguements right to left ,So the output shows us like that 5,5,3.... 
// // every compiler have their own behaviour some act like right to left and some left to right

// QUES 6 ------
//  #include<stdio.h> 
// #include<conio.h>
// int addnumbers(int n);
//  int main (){
//     int num ; 
//     printf("Enter thte positive intger \n");
//     scanf("%d" , &num);
//     printf("sum = %d" , addnumbers(num)); 
//      getch();
//      return 0 ;
// }
// int addnumbers(int n){
//     if(n != 0){
//         return n + addnumbers( n- 1) ;
//     }else{
//         return n;
//     }
// }

//QUES 7-----   

 #include<stdio.h> 
#include<conio.h>
void printpattern(int n);
 int main (){ 
    int n = 4 ;
    printpattern(n);
     getch();
     return 0 ;
}
void printpattern(int n){
if(n==1){
    printf("* \n");
    return;
}
printpattern(n-1);
for(int i =0 ; i<(2*n-1) ; i++){
    printf("*");
}
printf("\n");
} 