#include<stdio.h>
union student{
    int a;//4bytes
    char b;//1 bytes
};
int main(){
    union student s1;
    s1.a=65;
    printf("%d\n",s1.a);
    s1.b='c';
    printf("%c\n",s1.b);
     printf("%d",sizeof(s1));
    //  we cannot initialize values at a time.
    // if we do other memeber will be affected
    //size will be max of the member
    
return 0;
}