// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     // size of operater
//     // printf("the size of int on my pc %d \n" , sizeof(int));
//     // printf("the size of float on my pc %d \n" , sizeof(float));
//     // printf("the size of char on my pc %d \n" , sizeof(char));

//    //ptr = malloc (6 * sizeof(int))  // ptr = malloc(6*4);this is also correct way
//      ptr = (int *) malloc (6*sizeof(int));
//       for(int i = 0 ; i<5 ; i++ ){
//         printf("Enter the value of %d element : \n" , i);
//         scanf("%d" , &ptr[i]);
//       }
//     for(int i = 0 ; i<5 ; i++ ){
//         printf("The value of %d element is %d\n" , i , ptr[i]);

//       }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;

//      ptr = (int *) calloc (6 ,sizeof(int));
//     //   for(int i = 0 ; i<5 ; i++ ){
//     //     printf("Enter the value of %d element : \n" , i);
//     //     scanf("%d" , &ptr[i]);
//     //   }
//     for(int i = 0 ; i<5 ; i++ ){
//         printf("The value of %d element is %d\n" , i , ptr[i]);

//       }
//     return 0;
// }

//               CALLOC QUICK QUIZ
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int n ;
//     printf("Enter the value of n \n");
//     scanf("%d" , &n);
//      ptr = (int *) calloc (n,sizeof(int));
//       for(int i = 0 ; i<n ; i++ ){
//         printf("Enter the value of %d element : \n" , i);
//         scanf("%d" , &ptr[i]);
//       }
//     for(int i = 0 ; i<n ; i++ ){
//         printf("The value of %d element is %d\n" , i , ptr[i]);

//       }
//     return 0;
// }
//           FREE FUNCTION DEMO

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int *ptr2;
//     ptr = (int*) malloc (6 * sizeof(int));
//     for(int i = 0 ; i< 600 ; i++){
//         ptr2 = (int*) malloc (60000 * sizeof(int));
//         printf("enter the value of %d element : \n" , i  );
//         scanf("%d" , &ptr[i]);
//         free(ptr2);
//     }
//         for(int i = 0 ; i<6 ; i++ ){
//         printf("The value of %d element is %d\n" , i , ptr[i]);

//       }
//     return 0;
// }
//     REALLOC
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;

//     ptr = (int *)malloc(6 * sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the value of %d element : \n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of %d element is %d\n", i, ptr[i]);
//     }
//     //  REALOCATION
//     ptr = realloc(ptr, 10 * sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the value of %d element : \n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The value of %d element is %d\n", i, ptr[i]);
//     }
//     return 0;
// }  
//               PRACTICE SET QUES 5 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;

    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
    //    printf("Enter the value of %d element : \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    //  REALOCATION
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15 ; i++)
    {
        printf("Enter the value of %d element : \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    return 0;
}  
