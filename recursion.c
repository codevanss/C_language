 #include<stdio.h> 
#include<conio.h>
int factorial(int x);
 int main (){ 
    int a = 3;

    printf("the value of factorial %d is %d " , a , factorial(a));
     getch();
     return 0 ;
}
int factorial(int x){
    printf("calling factorial [%d] \n" , x);
    if(x==0 || x==1){
        return 1 ;
    }else{
        return x*factorial(x-1);
    }
}