#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **x; //int형 이중 포인터 변수 x 선언
    
    printf("sizeof(x) = %lu\n", sizeof(x)); //이중 포인터 x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가리키는 포인터의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //x가 가리키는 포인터가 가리키는 주소에 저장된 값의 크기 출력
}