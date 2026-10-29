/*실습 2: 배열 및 반복문 활용*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int grade[SIZE];
    int sum = 0;

    printf("5명의 점수를 입력하세요. \n");

    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    
    //각 배열의 값 프린트하기
    for(i=0;i<SIZE;i++)
        printf("grade[%d] = %d\n", i, grade[i]);  

    //평균 프린트하기
    printf("성적 평균 : %d\n", sum/SIZE);

    return 0; 
}