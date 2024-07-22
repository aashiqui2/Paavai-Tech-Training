#include <stdio.h>
#include <string.h>

typedef struct student
{
    int rollno;
    char name[100];
} stu;

stu *printDetails(int, char[]);

int main()
{
    stu *s1;
    s1 = printDetails(21, "raja");
    printf("%d\n", s1->rollno);
    printf("%s\n", s1->name);

    return 0;
}

stu *printDetails(int rollno, char name[])
{
    static stu s2;
    // s2.name=name; we cannot assing like this
    strcpy(s2.name, name);
    s2.rollno = rollno;

    return &s2; // returns address of local variable
}
