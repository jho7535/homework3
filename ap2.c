#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [Jeong Hanul] [2020039076] -----]\n\n");
    int list[5]; //크기가 5인 int형 배열 list 선언
    int *plist[5]; //크기가 5인 int형 포인터 배열 plist 선언

    list[0] = 10; //list[0]에 10 대입
    list[1] = 11; //list[1]에 11 대입

    plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 int의 크기만큼 동적 할당

    printf("list[0] \t= %d\n", list[0]); //list[0] 값 출력
    printf("list \t\t= %p\n", list); //list 배열의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0] 주소 출력
    printf("list + 0 \t= %p\n", list+0); //list 배열의 시작 주소에서 int * 0 사이즈 만큼 건너뛴 주소 출력
    printf("list + 1 \t= %p\n", list+1); //list 배열의 시작 주소에서 int * 1 사이즈 만큼 건너뛴 주소 출력
    printf("list + 2 \t= %p\n", list+2); //list 배열의 시작 주소에서 int * 2 사이즈 만큼 건너뛴 주소 출력
    printf("list + 3 \t= %p\n", list+3); //list 배열의 시작 주소에서 int * 3 사이즈 만큼 건너뛴 주소 출력
    printf("list + 4 \t= %p\n", list+4); //list 배열의 시작 주소에서 int * 4 사이즈 만큼 건너뛴 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list[4] 주소 출력

    free(plist[0]); //plist[0]에 할당된 메모리 공간 해제
}