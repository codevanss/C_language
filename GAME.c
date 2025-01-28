#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char you , char comp){
    // returns 1 If you win , -1 if you lose , and 0 if draw ---
    // DRAW condition
    if(you == comp){
        return 0;
    }
    // Non Draw Condition 
    if(you =='s' && comp == 'g'){
        return -1;
    }
    else if (you == 'g' && comp == 's'){
        return 1;
    }
    if(you =='s' && comp == 'w'){
        return 1;
    }
    else if (you == 'w' && comp == 's'){
        return -1;
    }
    if(you =='g' && comp == 'w'){
        return -1;
    }
    else if (you == 'w' && comp == 'g'){
        return 1;
    }
}
int main(){
    char you , comp;
    srand(time(0));
    int number = rand()%100+1;
     printf(" Computer Generate this Value %d \n" , number);
    if (number<33){
        comp = 's';
    }
    else if (number>33 && number <66){
        comp = 'w';
    }
    else if(number>66 && number<100){
        comp = 'g';
    }
    else{
        printf("You choose invalid option \n");
    }
   // printf("%d \n" , number);
    // comp = 's' ;
    printf("Enter S for Snake , W for Water and G for Gun \n ");
    scanf("%c" , &you);
    if(you == 's' && you == 'w' && you == 'g'){
        printf("You choose valid option\n Now here is your Result\n");
    }
    else{
        printf("Invalid option\n");
    }
    int result = SnakeWaterGun(you , comp);
    printf("You choose %c and computer choose %c \n" , you , comp);
    if(result==0){
        printf("GAME DRAW \n");
    } 
    else if(result==1){
        printf("YOU WIN \n");
    }    
    else{
        printf("YOU LOSE \n");
    }  
   return 0 ;
}
