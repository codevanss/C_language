 #include<stdio.h> 
#include<stdlib.h>
#include<time.h>
 int main (){ 
int number , guess , nguessess=1;
srand(time(0));
number = rand()%100 + 1; //generates a random number between 1 to 100 
//printf("the number is %d \n" , number);
     // Keep running the loop until the number is guessed
  do
  {
    printf("Guess the number between 1 to 100 \n");
    scanf("%d" , &guess);
    if (guess>number)
    {
       printf("LOWER NUMBER PLEASE \n");
    }
    else if(guess<number){
    printf("HIGHER NUMBER PLEASE \n");
  } 
  else{
    printf("you guessed it in %d attempt \n" , nguessess);
  }
  nguessess++;
  }while (guess!= number);
  
     return 0 ;
}