#include <stdio.h>
#include "subfile.c"
extern int count;
extern void printCount();  
int main() {
    printf("Initial count: %d\n", count);
    count = 10;
    printf("Modified count: %d\n", count);
    printCount();
    return 0;
}
