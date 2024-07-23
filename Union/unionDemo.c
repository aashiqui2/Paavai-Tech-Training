#include<stdio.h>
union student 
{
    int a;
    char b;
};
int main(){
    union student s1;
    s1.a=65;
    printf("%d\n",s1.a);
    printf("%c\n",s1.b);
return 0;
}