 #include<stdio.h> 
#include<conio.h>

 int main (){ 
int a=0;
scanf("%d" , &a);
do{
    printf("The value of a is %d\n" , a);
    a++;
}while (a<10);
/* Write a program to print first n natural numbers using do while loop */
// int i=0;
// int n ;
// printf("enter the value of n \n");
// scanf("%d" , &n);

// do{
//     printf("the number is this %d \n" , i+1);
//     i++;
// }while(i<n);

     getch();
     return 0 ;
}