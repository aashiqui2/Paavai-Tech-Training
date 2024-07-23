#include<stdio.h>
typedef struct student
{
   int rollno;
   char name[100];
}stu;

int main(){
    stu s1;
    printf("enter the values \n");
    scanf("%[^\n]s",&s1.name);
    scanf("%d",&s1.rollno);
    printf("%d\n",s1.rollno);
    printf("%s",s1.name);
return 0;
}