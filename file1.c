#include<stdio.h>
#include<conio.h>

void main(){
    FILE *ptr;
    //ptr = fopen("Hello.c" , "r"); // ----> for reading the file
    ptr = fopen("Hello.c" , "w"); // ----> for wrting a file
}

#include<stdio.h>
#include<conio.h>
int main(){
    FILE *ptr;
    int num , num2;
    ptr = fopen("vansh.txt" , "r");
    fscanf(ptr , "%d" , &num);
    printf("The value of num id %d\n" ,num);
    fscanf(ptr , "%d" , &num2);
    printf("The value of num2 id %d\n" ,num2);
    fclose(ptr);
    getch();
    return 0;
}