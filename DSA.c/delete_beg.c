#include<stdio.h>
#include<conio.h>
void create();
void display();
void del_beg();
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
        printf("\n Del_beg");
        printf("\n Enter Your Choice[1-3]");
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
         default:
         exit(0);
         }
         printf("\n Do you want to continue");
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
        printf("Enter Item value - \n");
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