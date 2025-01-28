 #include<stdio.h> 
#include<conio.h>

 int main (){ 
// int i ; BREAK 
// for( i = 0 ; i <1000 ; i++){
//     printf("%d \n" , i);
//     if(i==5){
//         break;
//     }
// }
int skip = 6 , i = 0 ;
// scanf("%d" , &skip );
while (i <10){
    i++;
    if(i!= skip){
        continue;
    }
    else {
        printf("%d \n" , i);
    }
} // CONTINUE 

     getch();
     return 0 ;
}