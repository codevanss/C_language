// QUICK QUIZ -- create a string "" and print its content using a loop ..... 
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     // str[] = {'V', 'A' , 'N' , 'S' , 'H', '\0'};
//     char str[] = "Vansh";
//     char *ptr= str;
//     while(*ptr != '\0'){
//         printf("%c" , *ptr);
//         ptr++;
//     }
//     getch;
//     return 0 ;
// }
// convienient way ----
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
// char *ptr="vansh become billionaire one day";
// printf("%s" , ptr);// %s format specifier s stands for string
//      getch();
//      return 0 ;
// }

//inputing string . C
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//     char s[34];
//     printf("Enter you name \n");
//     scanf("%s" ,s);
//     printf("your name is %s \n" , s);
//      getch();
//      return 0 ;
// }
//
//gets/puts.C
// #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//     char s[34];
//     printf("Enter you name \n");
//     gets(s);
//     puts(s);
//     //printf("your name is %s \n" , s);
//      getch();
//      return 0 ;
// }
//
// difference between two init methods.c
//  #include<stdio.h> 
// #include<conio.h>
//  int main (){ 
//    char *ptr = "vansh bhai"; // this will print shubham bhai 
//     //char ptr[] = "vansh bhai"; // this will show error and neither print vansh nor shubham
//     ptr = "shubhAm Bhai";
//     printf("%s" , ptr);
//      getch();
//      return 0 ;
// }

// standard library function.C
//  #include<stdio.h> 
//  #include<string.h>
// #include<conio.h>
//  int main (){ 
// char *st= "Vansh";
// int a = strlen(st);
// printf("The length of the string is %d" , a);
//      getch();
//      return 0 ;
// }

//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
//  int main (){ 
// char *st = "vansh";
// char st2[45];
// strcpy(st2 , st);
// printf("now the st2 is %s", st2);
//      getch();
//      return 0 ;
// }

//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
//  int main (){ 
//     char s1[11]= "vansh";
//     char s2[] = "parth ";
//     strcat(s2, s1);
//     printf("%s" , s2);
//      getch();
//      return 0 ;
// }

 #include<stdio.h> 
#include<conio.h>
#include<string.h>
 int main (){ 
    // char s1[11]= "vansh"; // it will give +1 or -1 
    // char s2[] = "parth ";
     char s1[11]= "vansh"; //it will give 0
    char s2[] = "vansh";
    int val =strcmp(s1, s2);
    printf("%d" , val);
     getch();
     return 0 ;
 }