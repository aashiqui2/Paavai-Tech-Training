#include<stdio.h>
// register int a=10;//error
int main(){
    register int i,sum=0;
    for(i=0;i<10;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
// * for register default value will be garbage value
// * it has only block and function scope and not function scope
// * it will be stored in CPU register