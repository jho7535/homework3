#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [Jeong Hanul] [2020039076] -----]\n\n");
    int list[5]; //크기가 5인 int형 배열 list 선언 
    int *plist[5] = {NULL,}; //크기가 5인 int형 포인터 배열 plist 선언. 모든 값을 NULL로 초기화

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 int의 크기만큼 동적 할당

    list[0] = 1; //list[0]에 1 대입
    list[1] = 100; //list[1]에 100 대입

    *plist[0] = 200; //plist[0]이 가리키는 주소에 200 대입

    printf("list[0] = %d\n", list[0]); //lsit[0] 값 출력
    printf("&list[0] = %p\n", &list[0]); //lsit[0] 주소 출력
    printf("list = %p\n", list); //list 배열의 시작 주소 출력
    printf("&list = %p\n", &list); //lsit 배열의 시작 주소 출력

    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]); //lsit[1] 값 출력
    printf("&list[1] = %p\n", &list[1]); //lsit[1] 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); //list 배열의 시작 주소에서 int * 1 사이즈 만큼 건너뛴 주소가 가리키는 값 출력
    printf("list+1 = %p\n", list+1); //list 배열의 시작 주소에서 int * 1 사이즈 만큼 건너뛴 주소 출력

    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); //plist[0]에 저장된 주소가 가리키는 값 출력
    printf("&plist[0] = %p\n", &plist[0]); //plist[0] 값이 저장된 주소 출력
    printf("&plist = %p\n", &plist); //plist 포인터 배열의 시작 주소 출력
    printf("plist = %p\n", plist); //plsit 포인터 배열의 시작 주소 출력
    printf("plist[0] = %p\n", plist[0]); //plist[0]에 저장된 주소 출력
    printf("plist[1] = %p\n", plist[1]); //plist[1]에 저장된 주소 출력
    printf("plist[2] = %p\n", plist[2]); //plist[2]에 저장된 주소 출력
    printf("plist[3] = %p\n", plist[3]); //plist[3]에 저장된 주소 출력
    printf("plist[4] = %p\n", plist[4]); //plist[4]에 저장된 주소 출력

    free(plist[0]); //plist[0]에 할당된 메모리 공간 해제
}