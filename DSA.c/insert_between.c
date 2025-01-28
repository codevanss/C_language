#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void create();
void display();
void insert_begin();
void insert_last();
void insert_between();
typedef struct node
{
    int num;
    struct node *next;
} NODE;
NODE *start = NULL;
int main()
{
    int ch;
    do
    {
        printf("\n1. Create ");
        printf("\n2. Display");
        printf("\n3. Insert at beginning");
        printf("\n3. Insert at last");
        printf("\n3. Insert in between");
        printf("\n Enter Your Choice[1-5] - ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
        case 3:
            insert_begin();
            break;
        case 4:
            insert_last();
            break;
        case 5:
            insert_between();
            break;
        default:
            exit(0);
        }
        printf("\n Do you want to continue");
        ch = getche();
    } while (ch == 'y' || ch == 'Y');
    getch();
    return 0;
}
void create()
{
    NODE *q, *temp;
    char ch;
    do
    {
        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter Item value - \n");
        scanf("%d", &temp->num);
        temp->next = NULL;
        if (start == NULL)
        {
            q = start = temp;
        }
        else
        {
            q->next = temp;
            q = temp;
        }
        printf("\nAdd more records ");
        ch = getche();
    } while (ch == 'y' || ch == 'Y');
}
void display()
{
    NODE *q;
    q = start;
    printf("\n Elemnets Are \n");
    while (q != NULL)
    {
        printf("%d\n", q->num);
        q = q->next;
    }
}
void insert_begin()
{
    NODE *q, *temp;
    temp = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter Item you want to insert - \n");
    scanf("%d", &temp->num);
    temp->next = start;
    start = temp;
}
void insert_last()
{
    NODE *q, *temp;
    temp = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter item for insert at last \n");
    scanf("%d", &temp->num);
    temp->next = NULL;
    q = start;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = temp;
}

void insert_between()
{
    NODE *q, *temp;
    int i, pos;
    temp = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter Position for Insert an item\n");
    scanf("%d", &pos);
    printf("\nEnter item for insert in between\n");
    scanf("%d", &temp->num);
    q = start;
    for (i = 1; i < pos - 1; i++)
    {
        q = q->next;
    }
    temp->next = q->next;
    q->next = temp;
}
