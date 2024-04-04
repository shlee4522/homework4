#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [LeeSeungHun] [2023041045] -----]\n");

int **x; //이중포인터 변수 x 선언
printf("sizeof(x) = %lu\n", sizeof(x)); //이중포인터 x의 크기, 포인터의 크기 4를 출력
printf("sizeof(*x) = %lu\n", sizeof(*x)); //포인터 x의 크기, 포인터의 크기 4를 출력
printf("sizeof(**x) = %lu\n", sizeof(**x)); //x로 x를 가리키고 있으므로 크기 4를 출력
}