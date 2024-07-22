#include<stdio.h>
typedef struct student
{
   int rollno;
   char name[100];
}stu;

int main(){
    stu s1;
    stu *ptr=&s1;
    printf("enter the values \n");
    scanf("%s %d",ptr->name,&ptr->rollno);
    printf("%d\n",s1.rollno);
    printf("%s",s1.name);
return 0;
}