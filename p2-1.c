#include <stdio.h>
#define MAX_SIZE 100 //전처리기를 사용하여 MAX_SIZE를 100으로 설정

float sum1(float list[], int); //sum1 함수의 원형 선언
float sum2(float *list, int); //sum2 함수의 원형 선언
float sum3(int n, float *list); //sum3 함수의 원형 선언
float input[MAX_SIZE], answer; //크기가 MAX_SIZE인 float형 전역 배열 input 선언, float형 전역 변수 answer 선언
int i; //int형 전역 변수 i 선언

void main(void)
{
    printf("[----- [Jeong Hanul] [2020039076] -----]\n\n");
    for (i = 0; i < MAX_SIZE; i++) //i를 0부터 1씩 증가시키며 MAX_SIZE보다 작을 때까지 반복
        input[i] = i; //input[i]에 i 대입

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input 배열의 시작 주소 출력
    
    answer = sum1(input, MAX_SIZE); //answer에 input, MAX_SIZE를 매개변수로 받는 함수 sum1의 리턴 값 대입
    printf("The sum is: %f\n\n", answer); //answer 값 출력

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input 배열의 시작 주소 출력

    answer = sum2(input, MAX_SIZE); //answer에 input, MAX_SIZE를 매개변수로 받는 함수 sum2의 리턴 값 대입
    printf("The sum is: %f\n\n", answer); //answer 값 출력

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input 배열의 시작 주소 출력

    answer = sum3(MAX_SIZE, input); //answer에 input, MAX_SIZE를 매개변수로 받는 함수 sum2의 리턴 값 대입
    printf("The sum is: %f\n\n", answer); //answer 값 출력
}

float sum1(float list[], int n) //float형 배열 list, int형 변수 n을 매개변수로 갖고 리턴 값이 flaot형인 함수 sum1
{
    printf("list\t= %p\n", list); //list 배열의 시작 주소 출력. 매개변수로 받은 배열의 시작 주소 출력.
    printf("&list\t= %p\n\n", &list); //list 배열의 시작 주소 출력. 매개변수로 선언되어 있는 배열의 시작 주소 출력.

    int i; //int형 변수 i 선언
    float tempsum = 0; //float형 변수 tempsum 선언
    for (i = 0; i < n; i++) //i를 0부터 1씩 증가시키며 n보다 작을 때까지 반복
        tempsum += list[i]; //tempsum에 tempsum + list[i] 값을 대입
    return tempsum; //tempsum를 반환
}

float sum2(float *list, int n) //float형 포인터 변수 list, int형 변수 n을 매개변수로 갖고 리턴 값이 flaot형인 함수 sum2
{
    printf("list\t= %p\n", list); //list 배열의 시작 주소 출력. 매개변수로 받은 배열의 시작 주소 출력.
    printf("&list\t= %p\n\n", &list); //list 배열의 시작 주소 출력. 매개변수로 선언되어 있는 배열의 시작 주소 출력.

    int i; //int형 변수 i 선언
    float tempsum = 0; //float형 변수 tempsum 선언
    for (i = 0; i < n; i++) //i를 0부터 1씩 증가시키며 n보다 작을 때까지 반복
        tempsum += *(list + i); //tempsum에 tempsum + list[i] 값을 대입
    return tempsum; //tempsum를 반환
}

/* stack variable reuse test */
//sum1, sum2에서 매개변수 배열 list, 포인터 list는 같은 주소를 할당 받았지만 sum3에서 매개변수 포인터 list는 다른 주소를 할당 받으면서 &list값이 다르게 나옴
float sum3(int n, float *list) //int형 변수 n, float형 포인터 변수 list을 매개변수로 갖고 리턴 값이 flaot형인 함수 sum3
{
    printf("list\t= %p\n", list); //list 배열의 시작 주소 출력. 매개변수로 받은 배열의 시작 주소 출력.
    printf("&list\t= %p\n\n", &list); //list 배열의 시작 주소 출력. 매개변수로 선언되어 있는 배열의 시작 주소 출력.

    int i; //int형 변수 i 선언
    float tempsum = 0; //float형 변수 tempsum 선언
    for (i = 0; i < n; i++) //i를 0부터 1씩 증가시키며 n보다 작을 때까지 반복
        tempsum += *(list + i); //tempsum에 tempsum + list[i] 값을 대입
    return tempsum; //tempsum를 반환
}
