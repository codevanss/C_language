//C PROGRAM TO CHECK WHETHER A NUMBER IS EVEN OR ODD..
 #include<stdio.h> 
#include<conio.h>


 int main (){
// int a , b;
//  printf(" Enter a number \n");
// scanf("%d" , &a);


// if(a%2==0){
// printf("%d is even \n" , a);
// }
// else{ // ELSE IS OPTIONAL 
// printf("%d is odd");
// }
// int a = 23;

// if (a>18){
//      printf("YOU CAN DRIVE \n" , a);
// }
// else {
//      printf("YOU ARE UNDER AGE \n");
// }

// int a ;
// printf("ENTER A NUMBER %d \n" , a);
// scanf("%d" , &a);
// if (a>18){
//      printf("YOU CAN DRIVE \n" , a);
//  }
//  else {
//       printf("YOU ARE UNDER AGE \n");
//  }

int age;
printf("ENTER YOUR AGE \n");
scanf("%d" , &age);

if( age >=80){
     printf(" you cannot drive \n") ; 
}
     else {
          printf("you can drive \n");
     }

if(age<=50){
     printf("half century complete \n");
}
 else {
     printf("you are under age \n");
}


getch();
     return 0 ;
}