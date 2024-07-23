#include<stdio.h>
typedef union student 
{
    int a;
    char b;
}stu;
int main(){
    stu s1;
    s1.a=65;
    s1.b='C';
    //values gets affected we cannot while assigning multiple member at a time. 
    printf("%d\n",s1.a);//67
    printf("%c\n",s1.b);//C
return 0;
}