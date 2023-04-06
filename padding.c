#include <stdio.h>

struct student //구조체 student 선언
{
    char lastName[13]; /* 13 bytes */ //멤버로 크기가 13인 char형 배열 lastName 선언
    int studentId;     /* 4 bytes */ //멤버로 int형 변수 studentId 선언
    short grade;       /* 2 bytes */ //멤버로 short형 변수 grade 선언
};

int main()
{
    struct student pst; //구조체 student pst를 선언

    printf("size of student = %ld\n", sizeof(struct student)); //구조체 student의 크기 출력. 13 + 4 + 2 = 19이지만 패딩이 적용되어 24 출력
    printf("size of int = %ld\n", sizeof(int)); //int의 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short의 크기 출력
    
    return 0;
} 