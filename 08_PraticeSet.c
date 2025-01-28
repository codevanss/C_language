//ques 2 -- write a program to take string as an input from the user using %c and %s. Confirm
//          that the strings are equal.
//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
//  int main (){ 
//     char st1[34];
//     char st2[34];
//  char c ;
//     int i =0 ;

//     printf("Enter the value of first string \n");
//     scanf("%s" , st1);
//     printf("Enter the value of second string character by character \n");
// // fflush(stdin);
//     // scanf("%c" , &c);
//     while (c != '\n'){
//         fflush(stdin);
//         scanf("%c" , &c);
//        // printf("%c" , c);
//        st2[i] =c ;
        
//         i++;
//     }
//     st2[i-1] ='\0';
//     printf("The value of st1 is %s \n" , st1);
//     printf("The value of st2 is %s \n" , st2);
//     printf("strcmp for these strings returns %d" , strcmp(st1 , st2));
//      getch();
//      return 0 ;
// }
// ques 3 --- write your own version of your strlen function from <string.h> 
//  #include<stdio.h> 
// #include<conio.h>
// //#include<string.h>
// int strlen(char *st ){
//     char *ptr = st ;
//     int len=0;
//     while (*ptr != '\0')
//     {
//         len++;
//         ptr++;
//     }
//     return len ;
// }
//  int main (){ 
//     char st[] = "vansh";
//     int l = strlen(st);
// printf("the length of this string is %d \n" , l);
//      getch();
//      return 0 ;
// }
//
// Ques 4--- write a function slice() to slice a string . it should change the original string such that .
//           it is now the sliced string . Take m and n as the start and ending position for slice
//  #include<stdio.h> 
// #include<conio.h>
// void slice(char *st , int m ,int n){
//    int i = 0 ;
//    while ((m+i)<n)
//    {
//     st[i] = st[i+m];
//     i++;
//    }
//    st[i] = '\0';
// }
//  int main (){ 
//     char st[] = "vansh";
//     slice(st , 1, 4);
//     printf("%s" , st);
//      getch();
//      return 0 ;
// }
// 
// Ques5 --- write your own version of string of strcpy function from <string.h>
//
// Ques 6--- write a program to encrypt a string by adding 1 to the ascii value of its character
//  #include<stdio.h> 
// #include<conio.h>
// void encrypt(char *c ){
// char *ptr = c ;
//     while(*ptr !='\0'){
//         *ptr = *ptr+1 ;
//         ptr++;
//     }
// }
//  int main (){ 
//     char c[] = "vansh";
//     encrypt(c);
//     printf("Encrypted string is %s" ,c);
//      getch();
//      return 0 ;
// }
// 
// Ques 7 --- write a program to decrypt the encrypted string using encrypt functin in problem 6 
//  #include<stdio.h> 
// #include<conio.h>
// void decrypt(char *c ){
// char *ptr = c ;
//     while(*ptr !='\0'){
//         *ptr = *ptr-1 ;
//         ptr++;
//     }
// }
//  int main (){ 
//     char c[] = "wboti";
//     decrypt(c);
//     printf("Decrypted string is %s" ,c);
//      getch();
//      return 0 ;
// }
//
// Ques 8 --- write a program to count the occurence of a given character in a string 
//  #include<stdio.h> 
// #include<conio.h>
// int occurence (char st[] , char c){
//     char *ptr = st ;
//     int count = 0;
//     while(*ptr != '\0'){
//      if(*ptr==c){
//         count++;
        
//      }ptr++;
//     }return count ;
// }
//  int main (){ 
//     char st[] = "vansh";
//    int count =  occurence(st ,'s');
//     printf("occurence = %d" , count);
//      getch();
//      return 0 ;
// }
//
//Ques 9--- write a program to check whether a given character is present in a string or not 
// #include<stdio.h> 
// #include<conio.h>
// int occurence (char st[] , char c){
//     char *ptr = st ;
//     int count = 0;
//     while(*ptr != '\0'){
//      if(*ptr==c){
//         count++;
//          }
//          ptr++;
//     }return count ;
// }
//  int main (){ 
//     char st[] = "vansh";
//    int count =  occurence(st ,'r');
//    // printf("occurence = %d" , count);
//    if (occurence>0)
//    {
//     printf("occurence = %d" , count );
//    }
//   else{
//     printf("not occurence ");
//    }
   
//      getch();

//      return 0 ;
// }  

