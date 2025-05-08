#include<stdio.h> 
#include<conio.h>

void printarray(int ptr[] , int n ){
    for( int i = 0 ; i<n ; i++){
        printf("the value of %d element %d \n " , i+1 , ptr[i]);
    } ptr[2] = 5555; // THIS VALUE WILL BE CHANGES IN ARR ARRAY OF MAIN AS WELL  
}
 int main (){ 
int arr[] = {1, 23,34,45,56,67,34};
// printarray(arr , 7);
printarray(arr , 7);
printf("%d" , arr[2]);
     getch();
     return 0 ;
}