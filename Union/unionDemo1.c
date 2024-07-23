#include<stdio.h>
typedef union student 
{
    int a;
    char b;
}stu;
int main(){
    stu s1;
    s1.a=65;
    printf("%d\n",s1.a);//65
    printf("%c\n",s1.b);//ASCII VALUES 'A'
return 0;
}