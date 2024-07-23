#include<stdio.h>
void increment();
void main(){
    increment();
    increment();
    // printf("%d",count);//undeclared count because the static variable is block scope
}
void increment(){
    static int count;//This statement is skipped it only executed only once 
    count++;
    printf("count=%d\n",count);
}

/*
* stored in RAM
* it has block,function and program scope
* lifetime will be till the end of the program
*/