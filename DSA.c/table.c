#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("Enter the table you want to print -- ");
    scanf("%d" , &a);
for(int i=1 ; i<=10 ; i++){
    printf("  %d x %d = %d \n",a,i, a*i);

}
}