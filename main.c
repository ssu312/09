/*실습 3: 배열 값 비교*/
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1,2,3,4,5};
    int b[SIZE] = {1,1,3,5,5};
    int flag_same = 1;

    for (i=0;i<SIZE;i++)
    {
        if (a[i] != b[i])
            printf("index %d different!\n", i);
    }

    return 0;
}