// Ques 1
// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };
// void main(){
//  struct vector v1 , v2 ;
//  v1.x=69;
//  v1.y=96;
//  printf("X dim is %d \n Y dim is %d \n" , v1.x,v1.y);
//  v2.x=59;
//  v2.y=46;
//  printf("X dim is %d \n Y dim is %d \n" , v2.x,v2.y);
// }
//QUes 2
// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };
//  struct vector sumVector(struct vector v1 ,struct vector v2)
//  {
//     struct vector result;
//     result.x = v1.x + v2.x ;
//     result.y = v1.y + v2.y;
//     return result;
//  }
// void main(){
//  struct vector v1 , v2 , sum;
//  v1.x=6;
//  v1.y=9;
//  printf("X dim is %d \n Y dim is %d \n" , v1.x,v1.y);
//  v2.x=5;
//  v2.y=6;
//  printf("X dim is %d \n Y dim is %d \n" , v2.x,v2.y);

//  sum = sumVector(v1 , v2);
//  printf("X dim of result is %d \n Y dim of result is %d \n" , sum.x , sum.y);

// }
// Ques 3 MCQ
// Ques 4 
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
//ques 5
// #include<stdio.h>
// struct complex{
//     int comp1;
//      int comp2;
//       int comp3;

// };
//  int main (){ 
//     struct complex vansh = {101 , 100 , 56};
//     printf("%d \n %d\n %d \n", vansh.comp1 , vansh.comp2 , vansh.comp3);
    
//  }
// Ques 6 
// #include<stdio.h>
// typedef struct complex{
// int real;
// int complex;
// }comp;
// void display (comp c){
//     printf("The value of real part is %d\n" , c.real);
//         printf("The value of complex part is %d\n" , c.complex);

// }
//  void main(){
//     comp cnums[5];
//     for(int i = 0 ; i<5 ; i++){
//         printf("Enter the real value for %d num \n" ,i+1); 
//         scanf("%d", &cnums[i].real);

//          printf("Enter the complex value for %d num \n" ,i+1); 
//         scanf("%d", &cnums[i].complex);
//     }
//     for(int i = 0 ; i<5 ; i++){
//         display (cnums[i]);
//  }}
// Ques 7
// #include<stdio.h>
//  typedef struct complex{
//     int comp1;
//      int comp2;
//       int comp3;
// }comp;
//  int main (){ 
//     comp vansh = {101 , 100 , 56};
//     printf("%d \n %d\n %d \n", vansh.comp1 , vansh.comp2 , vansh.comp3);
//     return 0;
//  }
// Ques 8 ?
//Ques 9 
// #include<stdio.h>
// typedef struct date{
//   int date;
//   int month;
//   int year;
// }date;

// void display(date d){
//     printf("The date is %d/%d/%d \n", d.date , d.month , d.year);
// }
// int datecmp(date d1 , date d2){
//     // year
//     if(d1.year>d2.year){
//         return 1;
//     }
//     if(d1.year<d2.year){
//         return -1;
//     }
//     // month
//     if(d1.month>d2.month){
//         return 1;
//     }if(d1.month<d2.month){
//         return -1;
//     }
//     // date
//    if(d1.date>d2.date){
//         return 1;
//     }
//     if(d1.date<d2.date){
//         return -1;
//     }
//     return 0;
// }
// int main() {
//  date d1 = {02, 11 , 2023};
//  date d2 = {06, 12, 2022};

//  display(d1);
//  display(d2);

//  int a  = datecmp(d1,d2);
//  printf("Date comparison function return %d" , a);
//  return 0;
// }
//Ques 10
#include<stdio.h>
typedef struct time{
   int hour;
  int min;
     int sec;

}time;

void display(time t){
    printf("The time is %d.%d.%d \n", t.hour , t.min , t.sec);
}
int timecmp(time t1 , time t2){
    // hour
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    // min
    if(t1.min>t2.min){
        return 1;
    }if(t1.min<t2.min){
        return -1;
    }
    // sec
   if(t1.sec>t2.sec){
        return 1;
    }
    if(t1.sec<t2.sec){
        return -1;
    }
    return 0;
}
int main() {
 time t1 = {23, 45 , 56  };
 time t2 = {18 , 54 , 45  };

 display(t1);
 display(t2);

 int a  = timecmp(t1,t2);
 printf("Time comparison function return %d" , a);
 return 0;
}