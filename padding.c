#include <stdio.h>
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
int main()
{
    printf("[----- [LeeSeungHun] [2023041045] -----]\n");

    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student)); 
    //원래 구조체 크기는 19byte지만 구조체 패딩으로 64bit OS는 8btye씩 메모리를 읽기때문에 8의 배수인 24byte 크기라서 24로 출력됨
    printf("size of int = %ld\n", sizeof(int)); //int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기 출력 
    return 0;
}