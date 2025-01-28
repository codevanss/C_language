#include<stdio.h>
#define LOOP for( x=0; x<5;x++){
    y=x+1;
    printf("%-5.*s\n", y , string);
}
int main()
{
    int x , y;
    static char string[]="COBOL";
    printf("\n");
    LOOP;
    return 0;
}
