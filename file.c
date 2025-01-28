// #include<stdio.h>
// #include<conio.h>

// void main(){
//     FILE *ptr;
//     //ptr = fopen("Hello.c" , "r"); // ----> for reading the file
//     ptr = fopen("Hello.c" , "w"); // ----> for wrting a file
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     FILE *ptr;
//     int num , num2;
//     ptr = fopen("vansh.txt" , "r");
//     fscanf(ptr , "%d" , &num);
//     printf("The value of num id %d\n" ,num);
//     fscanf(ptr , "%d" , &num2);
//     printf("The value of num2 id %d\n" ,num2);
//     fclose(ptr);
//     getch();
//     return 0;
//}

// quick quiz --->modify the program above to check whether the file exists or not before opening the file

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     FILE *ptr;
//     int num , num2;
//    //  ptr = fopen("vansh.txt" , "r");
//     ptr = fopen("aditya.txt" , "r");
//     if(ptr == NULL){
//         printf("This file does not exist\n");
//     }else{
//     fscanf(ptr , "%d" , &num);
//     printf("The value of num id %d\n" ,num);
//     fscanf(ptr , "%d" , &num2);
//     printf("The value of num2 id %d\n" ,num2);
//     fclose(ptr);
//     }
//     getch();
//     return 0;
// }

//                            WRITE
// #include<stdio.h>

// int main(){
//     FILE *fptr;
//     int number = 45;
//     fptr = fopen("generated.txt","w");
//     fprintf(fptr, "the number is %d \n",number);
//     fprintf(fptr, "Thanks for using fprintf");
//     fclose(fptr);

//     return 0;

// }
//                       fgetc fputc
// #include <stdio.h>
// void main()
// {   // fgetc demo for reading a file 
//     FILE *ptr;
//     ptr = fopen("fgetc.txt", "r");
//     // char c = fgetc(ptr);
//     //  printf("The value of my character is %c \n" , fgetc(ptr));
//     //  printf("The value of my character is %c \n" , fgetc(ptr));
//     //  printf("The value of my character is %c \n" , fgetc(ptr));
//     //  printf("The value of my character is %c \n" , fgetc(ptr));
//     //  printf("The value of my character is %c \n" , fgetc(ptr));
//     //  printf("The value of my character is %c \n" , fgetc(ptr));
//     //  printf("The value of my character is %c \n" , fgetc(ptr));
    
//     // ptr = fopen("fputc.txt", "w");
//     // putc('P' ,ptr);
//     // putc('A' ,ptr);
//     // putc('R' ,ptr);
//     // putc('T' ,ptr);
//     // putc('H ' ,ptr);
//     // fclose(ptr);
// }
   // #include<stdio.h>
   // int main(){
   // FILE *ptr;
   //  char c;
   //  ptr = fopen("getcdemo.txt","r");
   //  c = fgetc(ptr);
   //  while (c!= EOF){
   //       printf("%c", c);
   //       c = fgetc(ptr);
   //  }
   //    return 0;
   // }