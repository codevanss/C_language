// Queue using array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>
#define MAX 5
int queue_arr[MAX];
int rear = -1;
int front = -1;
void insert();
void display();
void del();
int main()
{
    int ch;
    char ans = 'y';
    while (ans == 'y')
    {
        printf("\n1. Insert ");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n Enter Your Choice[1-3] - ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;

            break;
        default:
            exit(0);
        }
        printf("\n Do you want to continue - ");
        ch = getche();
    }
    getch();
    return 0;
}
void insert()
{
    int item;
    if (rear == MAX - 1)
    {
        printf("\nQueue Overflow");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            printf("\ninput the element for adding in queue - ");
            scanf("%d", &item);
            rear = rear + 1;
            queue_arr[rear] = item;
        }
    }
}
void del()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow");
        return;
    }
    else
    {
        printf("\n Element deleted from Queue is %d", queue_arr[front]);
        front = front + 1;
    }
}
void display()
{

    if (front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\n Queue elements are \n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d \n", queue_arr[i]);
        }
    }
}
