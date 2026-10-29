/*실습 1: 배열의 활용 */
#include <stdio.h>

int main(void)
{
    int score[5];

    score[0]= 100;
    score[1]= 99;
    score[2]= 98;
    score[3]= 100;
    score[4]= 91;
    
    for (int i=0;i<5;i++)
        printf("score[%d] = %d\n", i, score[i]);

    return 0;
}