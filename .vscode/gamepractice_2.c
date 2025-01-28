 #include<stdio.h> 
#include<conio.h>
#include<stdlib.h>
#include<time.h>
 int main (){ 
    int number , guess , nguessess=1 ;
    srand(time(0));
    number=rand()%100 + 1 ;
    //printf("the random is %d \n" , number);
    do{
        printf("CHOOSE NUMBER BETWEEN 1 TO 100 \n");
        scanf("%d" , &guess);
        if(guess>number){
            printf("PLEASE CHOOSE LOWER NUMBER \n");
        }
    else if (guess<number){
        printf("PLEASE CHOOSE HIGHER NUMBER \n");
    }
    else {
        printf("YOU CHOOSE CORRECT IN %d ATTEMPTS \n" , nguessess);
    }
    nguessess++;
    }while(guess != number);
     getch();
     return 0 ;
}