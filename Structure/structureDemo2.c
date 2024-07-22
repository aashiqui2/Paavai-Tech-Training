#include<stdio.h>
typedef struct student
{
   int rollno;
   char name[100];
}stu;

int main(){
    // stu s1;
    // s1={21,"raja"};not allowded
    stu s1={21,"raja"};
    
    printf("%d\n",s1.rollno);
    printf("%s",s1.name);
return 0;
}