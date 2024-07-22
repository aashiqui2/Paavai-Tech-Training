#include <stdio.h>
#include <string.h>

typedef struct student {
    int rollno;
    char name[100];
} stu;

stu *printDetails(struct student*);

int main() {
    stu *s1;
    s1 = printDetails(s1);
    printf("%d\n", s1->rollno);
    printf("%s\n", s1->name);

    return 0;
}

stu *printDetails(stu *s1) {
    static stu s2;
    s2.rollno = 21;
    strcpy(s2.name, "raja");

    return &s2;
}
