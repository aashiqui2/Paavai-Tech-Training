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
    stu *ptr=&s1;
    printf("%d\n",ptr->rollno);
    printf("%s",ptr->name);
return 0;
}