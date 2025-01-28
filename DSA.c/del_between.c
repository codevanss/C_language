#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void display();
void del_beg();
void del_last();
void del_bet();
typedef struct node{
    int num;
    struct node *next;
}NODE;
NODE *start=NULL;
int main(){
    int ch;
    do
    {
        printf("\n1. Create ");
        printf("\n2. Display");
        printf("\n3. Del_beg");
        printf("\n4. Del_last");
        printf("\n5. Del_between");
        printf("\n Enter Your Choice[1-5]");
        scanf("%d" , &ch);

        switch(ch){
            case 1 :
             create();
             break;
             case 2:
             display();
         break;
         case 3: 
         del_beg();
         break;
         case 4:
         del_last();
         break;
         case 5:
         del_bet();
         break;
         default:
         exit(0);
         }
         printf("\n Do you want to continue - ");
         ch=getche();
    } while (ch=='y' || ch=='Y');
    getch();
    return 0;
}
void create(){
    NODE *q , *temp;
    char ch ;
    do{
        temp=(NODE*)malloc(sizeof(NODE));
        printf("\nEnter Item value - \n");
        scanf("%d" , &temp->num);
        temp->next=NULL;
        if(start==NULL){
            q=start=temp;
        }
        else{
            q->next=temp;
            q=temp;
        }
        printf("\nAdd more records ");
        ch=getche();
    }while(ch=='y' || ch=='Y');
}
void display(){
    NODE *q;
    q=start;
    printf("\n Elemnets Are \n");
    while(q!= NULL){
        printf("%d\n" , q->num);
        q=q->next;
    }
}
void del_beg(){
    NODE *temp;
    temp=start;
    start=start->next;
    printf("\nThe Deleted Item is %d" , temp->num);
    free(temp);
}
void del_last(){
    NODE *temp , *q;
    q=start;
    while(q->next->next != NULL){
        q=q->next;
    }
    temp=q->next;
    q->next=NULL;
    printf("\n The deleted item is %d " , temp->num);
    free(temp);
}
void del_bet(){
    NODE *temp , *q;
    int i,pos;
    q=start;
    printf("Enter Position for deleting an item ");
    scanf("%d" , &pos);
    for(i = 1 ; i<pos-1 ; i++){
        q=q->next;
    }
    temp = q->next;
    q->next=temp->next;
    printf("\nThe deleted item is %d" , temp->num);
    free(temp);
}