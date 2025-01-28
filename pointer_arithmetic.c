 #include<stdio.h> 
#include<conio.h>
 int main (){ 
   float j =1.2 ;
   float *rko = &j ;
    float i = 3.4 ; // int store 4 byte , char store1 byte , float store 4 byte
    float  *ptr = &i ;
    printf("the value of ptr is %u \n" , ptr);
     printf("the value of rko is %u \n" , rko);
    // ptr++;
    // ptr++ ;
    //ptr-- ;
     //ptr = ptr +1;
     ptr = ptr-rko;
    printf("the value  is %u \n" , ptr-rko);
     getch();
     return 0 ; // quick quiz also available in this file 
}