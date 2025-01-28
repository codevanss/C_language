#include<stdio.h>
#include<conio.h>
void create();
void display();
void insert_begin();
void insert_last();
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
        printf("\n3. Insert at beginning");
        printf("\n3. Insert at last");
        printf("\n Enter Your Choice[1-4] - ");
        scanf("%d" , &ch);

        switch(ch){
            case 1 :
             create();
             break;
             case 2:
             display();
             case 3 :
             insert_begin();
             break;
             case 4:
             insert_last();

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
void insert_begin(){
NODE *q,*temp;
temp=(NODE*)malloc(sizeof(NODE));
printf("Enter Item you want to insert - ");
scanf("%d" , &temp->num);
temp->next=start;
start=temp;

}
void insert_last(){
NODE *q,*temp;
temp=(NODE*)malloc(sizeof(NODE));
printf("Enter item for insert at last ");
scanf("%d" , &temp->num);
temp->next=NULL;
q=start;
while(q->next!=NULL){
    q=q->next;
}
q->next=temp;
}
