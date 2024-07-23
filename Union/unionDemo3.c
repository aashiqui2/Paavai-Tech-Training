#include<stdio.h>
typedef union student 
{
    int a;
    char b;
}stu;
int main(){
    stu s1;
    printf("%d",sizeof(s1));//maximum of the member will be the size of the union
return 0;
}