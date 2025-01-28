#include <stdio.h>
#include <conio.h>

// int main()

// ques1--what will be the output of this program
// int a = 10;
// if (a = 11)
// {
//     printf(" i am 11 \n");
// }
// else
// {
//     printf("i am not 11 \n");
// }

/*ques2--write a program to find out whether a student is pass or fail ; if it requires tota 40%
and at least 33% in each subject to pass . Assume 3 subjects and take marks as an input from
the user */
int main()
{
    int physics, chemistry, maths;
    float total;

    printf("enter physics marks \n");
    scanf("%d", &physics);

    printf("enter chemistry marks \n");
    scanf("%d", &chemistry);

    printf("enter maths marks \n");
    scanf("%d", &maths);
    total = (physics + chemistry + maths) / 3;

    if ((total < 40) || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("your percentage is %f and you are failed \n", total);
    }
    else
    {
        printf("your percentage is %f and you are pass \n", total);
    }
    // ques3
    // int main(){
    // int income ;
    // printf("enter the income \n");
    // scanf("%d" , &income);
    //  if(income>=250000 && income<=500000){
    //      printf("you sould to pay income tax 5percent  \n");
    //  }
    // else if  (income>=500000 && income<=1000000){
    //     printf("you sould to pay income tax 20percent  \n");
    // }
    // else if  (income>1000000){
    //     printf("you sould to pay income tax 30percent  \n");
    // }
    // else if (income<250000) {
    //     printf("you should not to pay income tax \n");
    // }

    // write a program to find greatest of four numbers entered by the user

    // int main()

    // {

    // int num1, num2, num3, num4;

    // printf("Enter first no.\n");

    // scanf("%d", &num1);

    // printf("Enter second no.\n");

    // scanf("%d", &num2);

    // printf("Enter third no.\n");

    // scanf("%d", &num3);

    // printf("Enter fourth no.\n");

    // scanf("%d", &num4);

    // if(num1>num2 && num1>num3 && num1>num4){

    // printf("The greatest no. is %d \n", num1);

    // }

    // else if(num2>num3 && num2>num4){

    // printf("The greatest no. is %d \n", num2);

    // }

    // else if(num3>num4){

    // printf("The greatest no. is %d \n", num3);

    // }

    // else{

    // printf("The greatest no. is %d \n", num4);

    // }

    getch();
    return 0;
}