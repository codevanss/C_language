// ques 1
// #include<stdio.h>

// int main()
// {   int a , b ,c ;
//     FILE *ptr;
//     ptr = fopen("fgetc.txt" , "r");
//     fscanf(ptr ,"%d %d %d" , &a ,&b, &c);
//     printf("THe values of a b c is %d %d %d \n" , a , b, c );

//     return 0 ;
// }

// ques 2
//  #include<stdio.h>

//  int main(){
//     FILE *ptr;
//     int num;
//     printf("Enter the table you need to want \n");
//     scanf("%d" , &num);
//     ptr = fopen("table.txt" , "w");
//     for(int i = 0 ; i < 10 ; i++){
//         fprintf(ptr , "%d X %d = %d \n" , num , i+1 , num*(i+1));
//     }
//     fclose(ptr);
//     return 0 ;
//  }

// ques 3
// #include <stdio.h>

// int main()
// {
//     FILE *ptr1, *ptr2;
//     int num; char c;
//     ptr1 = fopen("a.txt", "r");
//     ptr2 = fopen("b.txt", "w");
//     c = fgetc(ptr1);
//     while(c != EOF)
//     {
//         fputc(c, ptr2);
//         fputc(c, ptr2);
//        c = fgetc(ptr1);

//     }

//     fclose(ptr1);
//     fclose(ptr2);

//     return 0 ;
// }

// ques 4
// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("output.txt", "w");
//     char s1[6];
//     char s2[7];
//     int  a;
//     int  b;
//    printf("Enter your name : \n");
//     scanf("%s", &s1);
//    printf("ENTER YOUR SALARY : ");
//     scanf("%d" , &a);

//     printf("Enter your name : \n");
//     scanf("%s", &s2);
//     printf("ENTER YOUR SALARY : ");
//     scanf("%d" , &b);

//     fprintf(ptr , "YOUR NAME IS : %s  AND YOUR SALARY IS %d \n" , s1 , a);
//     fprintf(ptr , "YOUR NAME IS : %s  AND YOUR SALARY IS %d \n" , s2 , b);
//     fclose(ptr);
//     return 0 ;
// }

// ques 5---

#include <stdio.h>

int main()
{
  FILE *ptr, *fptr;
  int num;
  // int c;
  ptr = fopen("fgetcc.txt", "r");
   num = fgetc(ptr);
  // while (num != EOF)
  // {
  //   printf("%d \n", fgetc(ptr));
  //   num = fgetc(ptr);
  // }
  fptr = fopen("fgetcc.txt", "w");
  fprintf(fptr, "YOUR PREVIOUS NUMBER IS %d \n", num);
  fprintf(fptr, "Now the numebr is %d ", num * 2);
  fclose(ptr);
  return 0;
}
