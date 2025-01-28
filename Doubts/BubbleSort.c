#include<stdio.h>
int main()
{
    int arr[10];
    printf("enter the array \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 10-1; i++)
    {
        for (int j = 0; j < 10-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            } 
            
        }
        
    }
     printf(" the array is \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
