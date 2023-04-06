#include <stdio.h>

struct student1 //구조체 student1 선언
{
    char lastName; //멤버로 char형 변수 lastName 선언
    int studentId; //멤버로 int형 변수 studentId 선언
    char grade; //멤버로 char형 변수 grade 선언
};
typedef struct //typedef를 활용하여 구조체 student2 선언. 이 구조체는 student2라는 이름으로 새롭게 정의.
{
    char lastName; //멤버로 char형 변수 lastName 선언
    int studentId; //멤버로 int형 변수 studentId 선언
    char grade; //멤버로 char형 변수 grade 선언
} student2;

int structE(student2 st2, student2 st3) //구조체 student2 st2, st3를 매개변수로 갖고 리턴 값이 int형인 structE 함수
{
    if (st2.lastName != st3.lastName) //st2 멤버 lastName과 st3 멤버 lastName이 다르면
        return 0; //0을 반환
    if (st2.studentId != st3.studentId) //st2 멤버 studentId와 st3 멤버 studentId가 다르면
        return 0; //0을 반환
    if (st2.grade != st3.grade) //st2 멤버 grade와 st3 멤버 grade가 다르면
        return 0; //0을 반환
    
    return 1; //1을 반환
}

int main()
{
    struct student1 st1 = {'A', 100, 'A'}; //구조체 student1 st1을 선언. 멤버에 각각 A, 100, A를 대입

    printf("st1.lastName = %c\n", st1.lastName); //st1 멤버 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1 멤버 studentId 출력
    printf("st1.grade = %c\n", st1.grade); //st1 멤버 grade 출력

    student2 st2 = {'B', 200, 'B'}; //구조체 student2 st2를 선언. 멤버에 각각 B, 200, B를 대입

    printf("\nst2.lastName = %c\n", st2.lastName); //st2 멤버 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); //st2 멤버 studentId 출력
    printf("st2.grade = %c\n", st2.grade); //st2 멤버 grade 출력

    student2 st3; //구조체 student2 st3를 선언

    st3 = st2; //st3의 멤버들에 st2의 멤버들을 대입

    printf("\nst3.lastName = %c\n", st3.lastName); //st3 멤버 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); //st3 멤버 studentId 출력
    printf("st3.grade = %c\n", st3.grade); //st3 멤버 grade 출력

    /* equality test */
    if (structE(st3, st2)) //구조체 st3, st2를 매개변수로 받는 함수 structE의 반환 값이 참이라면
        printf("equal\n");
    else
        printf("not equal\n");

    return 0;
}