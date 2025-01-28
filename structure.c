//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
// struct employee{
//   int code ;
//   float salary;
//   char name[10];
// };
//  int main (){ 
//     int a=4;
//     char b = 'g';
//     float c = 145.648;
//     // employee e1;
//     // e1.salary = 34.455 ; ----> won't work without employee structure

//     struct employee e1 ;
//     e1.code = 100;
//     e1.salary = 5000.43;
//     // e1.name = "vansh" ---> won't work
//     strcpy(e1.name , "vansh");

//     printf("%d \n" , e1.code);
//     printf("%s \n" , e1.name);
//     printf("%.2f \n" , e1.salary);
//      getch();
//      return 0 ;
// }
//
// quick quiz----> Write a program to store thedetails of 3 employees from the user defined data .
//                 use the structure declared above.
//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[10];
// };
//  int main (){ 
//     struct employee e1 ,e2 ,e3;
//     printf("Enter the value for code of e1--- ");
//     scanf("%d" , &e1.code);
//      printf("Enter the value for salary of e1--- ");
//     scanf("%f" , &e1.salary);
//      printf("Enter the name of e1--- ");
//     scanf("%s" , e1.name);

//     printf("Enter the value for code of e2--- ");
//     scanf("%d" , &e2.code);
//      printf("Enter the value for salary of e2--- ");
//     scanf("%f" , &e2.salary);
//      printf("Enter the name of e2--- ");
//     scanf("%s" , e2.name);

//     printf("Enter the value for code of e3--- ");
//     scanf("%d" , &e3.code);
//      printf("Enter the value for salary of e3--- ");
//     scanf("%f" ,&e3.salary);
//      printf("Enter the name of e3--- ");
//     scanf("%s" , e3.name);
//      getch();
//      return 0 ;
// }


//                                    ARRAY OF STRUCTURE
//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };

//  int main (){ 
//     struct employee facebook[100];
    
//     facebook[0].code = 100 ;
//     facebook[0].salary = 30.35;
//     strcpy(facebook[0].name , "Vansh");

//     facebook[1].code = 101 ;
//     facebook[1].salary = 32.35;
//     strcpy(facebook[1].name , "ansh");

//     facebook[2].code = 102 ;
//     facebook[2].salary = 20.35;
//     strcpy(facebook[2].name , "Vsh");

//     facebook[3].code = 103 ;
//     facebook[3].salary = 10.35;
//     strcpy(facebook[3].name , "Parth");

//     printf("%d " , facebook[0].code);
//     printf("%f " , facebook[0].salary);
//     printf("%s " , facebook[0].name);
//      getch();
//      return 0 ;
//  }

//                            Another way to initialize structure 
//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
// struct employee{
//     int code ;
//     float salary;
//     char name[20];
// };
//  int main (){ 
//     struct employee Vansh = {101 , 100.25 , "Vansh"};
//     printf("Vansh code is --%d\n" , Vansh.code);
//     printf("Vansh salary is --%f \n" , Vansh.salary);
//     printf("His name is --%s " , Vansh.name);
//      getch();
//      return 0 ;
// }

//                           Pointer to Structure
//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };
//  int main (){ 
//     struct employee e1;
//     struct employee *ptr;
//     ptr =&e1;
// //(*ptr).code = 101; we caN also write 
// ptr->salary = 101.5 ;
//     printf("%0.2f" , e1.salary);
//      getch();
//      return 0 ;
// }
//                      Passing Function to a Structure
//QuickQuiz :-  complete this show function to display the content of employee
//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };
// void show(struct employee emp){
//     printf("the code of the employee is: %d \n" , emp.code);
//     printf("the salary of the employee is: %0.2f \n" , emp.salary);
//     printf("the name of the employee is: %s \n", emp.name);
//     emp.code=34;
// }
//  int main (){ 
//     struct employee e1;
//     struct employee *ptr;
//     ptr =&e1;
// //(*ptr).code = 101; we caN also write 
//     ptr->code = 101.5 ;
//     ptr->salary = 15000.90;
//     strcpy(ptr->name , "Vansh");
    
//     show(e1);
//     printf("The code of employee is: %d \n" , e1.code); // value stay 101 becoz it passes copy only . Structure by refernce update nhi ho rha
//      getch();
//      return 0 ;
// }
//                            Typedef keyword
//  #include<stdio.h> 
// #include<conio.h>
// #include<string.h>
//  typedef struct employee{
//     int code;
//     float salary;
//     char name[20];
// }emp ;
//  void show(struct employee emp){
//     printf("the code of the employee is: %d \n" , emp.code);
//     printf("the salary of the employee is: %0.2f \n" , emp.salary);
//     printf("the name of the employee is: %s \n", emp.name);
//     emp.code=34;}
//  int main (){ 
//     // Declaring ptr (pointer) and e1
//     /*struct employee*/ emp e1;
//     /*struct employee*/ emp *ptr;
//     ptr =&e1; // pointng ptr to e1

// //  Set the member value for e1 
//     ptr->code = 101.5 ;
//     ptr->salary = 15.56;
//     strcpy(ptr->name , "Vansh");
//     show(e1);
//      getch();
//      return 0 ;
// }
