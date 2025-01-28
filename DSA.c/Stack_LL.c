#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include<process.h>
void push();
void pop();
void display();
struct node{
    int info;
    struct node *link;
}*top=NULL;
int main(){
   int ch;
   char ans = 'y';
   while(ans=='y'){
    printf("\n1.PUSH");
    printf("\n2.POP");
    printf("\n3.DISPLAY");
    printf("\n4.EXIT");
    printf("\n Enter choice - ");
    ch =getche();
    switch(ch){
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        default:
        exit(0);

    }
    printf("do you want to continue - ");
    ans=getche();

   }
   getch();
   return 0 ;
}
void push(){
    struct node *tmp;
    int item;
    tmp=(struct node*)malloc(sizeof(struct node));
    printf("ENter the new value for pushing ");
    scanf("%d" , &item);
    tmp->info=item;
    tmp->link=top;
}
void pop(){
    struct node *tmp;
    if(top==NULL){
        printf("\nstack is empty");
    
    }
    else{
        tmp=top;
        printf("\n Popped item is %d" , tmp->info);
        top=top->link;
        free(tmp);
    }
}
void display(){

    struct node *ptr;
    ptr=top;
    if(top==NULL){
        printf("stack is empty");
        
    }
    else{
        printf("\n stack elements are\n");
        while(ptr!=NULL){
            printf("%d\n" , ptr->info);
            ptr=ptr->link;
        }
    }
}