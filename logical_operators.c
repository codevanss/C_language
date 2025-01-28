#include <stdio.h>
#include <conio.h>

int main()
{
    // int age ;
    // printf("ENTER YOUR AGE \n");
    // scanf("%d" , &age);
    //  if ( age <= 70 && age >=18) {
    //      printf("you are above 18 and below 70 , you can drive \n") ;
    //  }
    // else{
    //     printf("you cannot drive \n");
    // }
    int age;
    int vipPass = 0;
    vipPass = 1;
    printf("ENTER YOUR AGE \n");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || vipPass==1)
    {
        printf("you are above 18 and below 70 , you can drive \n");
    }
    else
    {
        printf("you cannot drive \n");
    }

    getch();
    return 0;
}