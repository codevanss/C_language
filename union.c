#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[20];
};
 int main()
{ union student s1;
s1.id = 1;
s1.marks = 45;
s1.fav_char = 'S';
strcpy(s1.name , "Parth"); // this show only correct coz we use union . Only last line will print correct
 // one member active at a time
 printf(" the  id is %d \n" , s1.id );
printf(" the  marks is %d \n" , s1.marks);
printf(" the  char is %c \n" , s1.fav_char);
printf(" the name is %s \n" , s1.name);
// printf(" the is %d \n" , );
return 0;
}