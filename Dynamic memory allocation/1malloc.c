#include <stdio.h>
#include <stdlib.h> //must need to include
int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    //  when we access the ptr without initializing
    printf("%d\n", ptr[0]); // garbage value
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