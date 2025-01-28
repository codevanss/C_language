 #include<stdio.h> 
#include<conio.h>

 int main (){ 
     int  i = 34 ; 
    //  int *j = &i ; // j will now store the address of i
    //  printf(" the value of i is %d \n" , i);
    //     printf(" the value of i is %d \n" , *j);
    //        printf(" the addressof i is %u \n" , &i);
    //           printf(" the address of i is %u \n" , j); 
      int *j ;
       j = &i ;
       printf(" the address of i is %u \n" , &i);
 printf(" the address of i is %u \n" , j);
  printf(" the address of j is %u \n" , &j);
   printf(" the value of i is %u \n" , i);
    printf(" the value of i is %u \n" , *(&j)); // *(&i)
     printf(" the value of i is %u \n" , *j);
     getch();
     return 0 ;
}