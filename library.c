#include<stdio.h>
#include<math.h>
int main (){
    int side;
    printf("Enter the value of a side \n");
    scanf("%d" , &side);
    printf("the value of area is %f" , pow(side,2));
    return 0;
}