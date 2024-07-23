#include <stdio.h>
#include<stdlib.h>//must need to include
int main()
{
    int *ptr = (int *)calloc(5 ,sizeof(int));
    printf("%d\n",ptr[0]);// value will be initialize to 0 by default

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}