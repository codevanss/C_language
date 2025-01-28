#include<stdio.h>
int main()
{
    int num=0;
    for (int i = 0; i < 3 ; i++)
    {
        for (int space = 0; space < i; space++)
        {
            printf(" ");
        }
        for (int k = 0; k < 4-i; k++)
        {
            printf("%d",++num);
        }
        printf("\n");        
    }
    
    
    return 0;
}
