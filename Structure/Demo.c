#include <stdio.h>
#include<string.h>
struct student{
    int a;//4bytes
    char b;//1 bytes
};
int main()
{
    struct student s1;
    s1.a=65;
    s1.b='C';
    printf("%d\n",s1.a);
    printf("%c\n",s1.b);
    printf("%d",sizeof(s1));
    
    return 0;
}