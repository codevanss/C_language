#include <stdio.h>
#include <conio.h>

int main()
{
/* quick quiz- write a program to print natural numbers from 10 to 20 when initial loop counter 
is initialiged by 0 */

int i = 0;
while( i <= 20){
if(i >= 10){
 printf("the value of i is %d \n " , i);
}
 i++ ;
}

getch();
return 0;
}