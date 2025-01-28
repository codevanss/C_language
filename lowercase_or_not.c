 #include<stdio.h> 
#include<conio.h>


 int main (){ 
//97-122 = a-z ASCII VALUE
char ch;
printf("enter the character \n");
scanf("%c" , &ch);
if(ch<=122 && ch>=97){
    printf("this is lower case");
}
else{
    printf("this is not lower case");
}

      getch();
     return 0 ;
}