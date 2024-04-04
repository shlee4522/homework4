#include <stdio.h>
struct student1 {
    char lastName;
    int studentId;
    char grade;
};
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;
int main() 
{
    printf("[----- [LeeSeungHun] [2023041045] -----]\n");

    struct student1 st1 = { 'A', 100, 'A' };
    printf("st1.lastName = %c\n", st1.lastName); //구조체 student1의 lastname 변수 값 출력
    printf("st1.studentId = %d\n", st1.studentId); //구조체 student1의 studentid 변수 값 출력
    printf("st1.grade = %c\n", st1.grade); //구조체 student1의 grade 변수 값 출력
    student2 st2 = { 'B', 200, 'B' };
    printf("\nst2.lastName = %c\n", st2.lastName); //구조체 student2의 lastname 변수 값 출력
    printf("st2.studentId = %d\n", st2.studentId); //구조체 student2의 studentid 변수 값 출력
    printf("st2.grade = %c\n", st2.grade); //구조체 student2의 grade 변수 값 출력
    student2 st3;
    st3 = st2; //구조체 student2를 구조체 student3에 넣기
    printf("\nst3.lastName = %c\n", st3.lastName); //구조체 student3의 lastname 변수 값 출력
    printf("st3.studentId = %d\n", st3.studentId); //구조체 student3의 studentid 변수 값 출력
    printf("st3.grade = %c\n", st3.grade); //구조체 student3의 grade 변수 값 출력
    /* equality test */ 
    if (st3.grade == st2.grade&&st3.lastName==st2.lastName&&st3.studentId==st2.studentId) /* not working */
        //구조체는 여러개 변수로 구성되어 있기에, 각각의 변수의 값을 비교해야함
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}