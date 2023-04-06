#include <stdio.h>

void print_one(int *ptr, int rows); //print_one 함수의 원형 선언

int main()
{
    int one[] = {0, 1, 2, 3, 4}; //크기가 5인인 int형 배열 one 선언

    printf("one = %p\n", one); //배열 one의 시작 주소 출력
    printf("&one = %p\n", &one); //배열 one의 시작 주소 출력
    printf("&one[0] = %p\n", &one[0]); //배열 one[0]의 주소 출력
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //배열 one[0]의 주소, 5를 매개변수로 받는 함수 print_one 실행

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //배열 one의 시작 주소, 5를 매개변수로 받는 함수 print_one 실행

    return 0;
}

void print_one(int *ptr, int rows) //int형 포인터 변수 ptr, int형 변수 rows를 매개변수로 갖는 void형 함수 print_one
{ /* print out a one-dimensional array using a pointer */
    int i; //int형 변수 i 선언
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)  //i를 0부터 1씩 증가시키며 rows보다 작을 때까지 반복
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //포인터 ptr의 시작 주소에서 int * i 사이즈 만큼 건너뛴 주소와 그 주소에 저장된 값 출력
    printf("\n");
}