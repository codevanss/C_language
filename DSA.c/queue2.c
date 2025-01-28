//Queue using linked list
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
void insert();
void del();
void display();
struct node{
    int info;
    struct node *link;
}*front=NULL , *rear=NULL;
int main(){
     int ch;
    char ans = 'y';
    while (ans=='y'){
         printf("\n1. Insert ");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. exit");
        printf("\n Enter Your Choice[1-4] - ");
        fflush(stdin);
        scanf("%d" , &ch);

        switch(ch){
            case 1 :
             insert();
             break;
             case 2:
             del();
             break;
             case 3 :
             display();
             break;

         break;
         default:
         exit(0);
         }
         printf("\n Do you want to continue - ");
         ch=getche();
    }
    getch();
    return 0 ;
}
void insert(){
    struct node *tmp;
    int item ;
    tmp=(struct node*)malloc(sizeof(struct node));
    printf("\n Input the element for adding in queue - ");
    scanf("%d" , &item);
    tmp->info=item;
    tmp->link=NULL;
    if(front==NULL){
        front=tmp;
    }
    else{
        rear->link=tmp;
        rear=tmp;
    }
}
void del(){
struct node *tmp;
if (front==NULL)
{
    printf("Queue underflow");
}
else{
    tmp=front;
    printf("\n Element deleted from queue is %d" , tmp->info);
    front=front->link;
    free(tmp);
}

}
void display(){
    struct node *ptr;
    ptr =front;
    if(front==NULL){
        printf("\n Queue is empty");
    }
    else{
        printf("\nQueue elements are ");
        while(ptr!=NULL){
            printf("%d\n",ptr->info);
            ptr=ptr->link;
        }
    }
}