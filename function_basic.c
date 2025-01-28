//  #include<stdio.h> 
// #include<conio.h>
// void display(); //function prototype

//  int main (){ 
//     int a ;
//     printf("Initializing display function \n");
//     display();   //function call
//     printf("Display function finished its work \n");
//      getch();
//      return 0 ;
// }

// void display(){
//     printf("This is display \n"); //funtion definition
// }
//  #include<stdio.h> 
// #include<conio.h>
// void display();
//  int main (){ 
//     int a ;
//     display();
//      getch();
//      return 0 ;
// }
// void display(){
//     printf("Good Morning \n");
//     printf("Good Afternoon \n");
//     printf("Good Night");
// }
 #include<stdio.h> 
#include<conio.h>
void GoodMorning();
void Goodafternoon();
void Goodnight();
 int main (){ 
    GoodMorning();
    //  Goodafternoon();
    //   Goodnight();
     getch();
     return 0 ;
}
void GoodMorning(){
    printf("hello\n");
    Goodafternoon();
}
void Goodafternoon(){
    printf("hemlo\n");
    Goodnight();
}
void Goodnight(){
    printf("ho gya");
}






