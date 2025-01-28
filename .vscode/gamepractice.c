 #include<stdio.h> 
#include<stdlib.h>
#include<time.h>

 int main (){ 
int number , guess , nguessess=1 ;
srand(time(0));
number = rand()%100 + 1 ;
do{
    printf("guess number between 1 to 100 \n");
    scanf("%d" , &guess);
    if(guess>number){
        printf("LOWER NUMBEER PLEASE \n");
    }
    else if (guess<number){
        printf("HIGHER NUMBER PLEASE \n");
    }
    else{
        printf("you guessed in %d attempts \n" , nguessess);
    }
    nguessess++;
}
    while(guess != number);
     return 0 ;
}