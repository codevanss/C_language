#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
void push();
void pop();
void display();
int top = -1;
int stack_arr[MAX];
int main()
{
    int ch;
    char ans = 'y';
    while (ans == 'y')
    {
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. DISPLAY");
        printf("\n 4. EXIT");
        printf("\n Enter choice - ");
        scanf("%d", &ch);
        switch (ch)
        {
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
        printf("\n Do you want to continue");
        ans = getche();
    }
    getch();
    return 0;
}
void push()
{
    int item;
    if (top == MAX - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("\n Enter the value");
        scanf("%d", &item);
        top = top = +1;
        stack_arr[top] = item;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("Popped element id %d", stack_arr[top]);
        top = top - 1;
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("\n Stack is empty");
    }
    else
    {
        printf("\nStack elements are\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack_arr[i]);
        }
    }
}