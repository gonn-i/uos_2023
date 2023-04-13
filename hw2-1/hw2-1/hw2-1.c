#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// transition 함수콜
void transition(int decimal, int Num);

//main 함수 
int main(void) {

    int decimal, Num;  //입력될 10진수(decimal)와 변환할 진법(Num) 정수형 선언 

    printf("변환할 10진수 입력: ");  //10진수 입력받기 위한 메시지
    scanf_s("%d", &decimal);          //10진수 입력 받기 

    printf("변환할 진법 입력 (2-16): ");   //변환할 진법을 받기 위한 메시지
    scanf_s("%d", &Num);                      //변환할 진법 입력 받기 

    if (Num > 16 || Num < 2) printf("2~16 사이의 숫자만 선택해주세요,");  //2-16 사이의 진법이 아닌 경우 
    else {
        printf("%d의 %d진수 변환 값:", decimal, Num);   //2-16 사이의 진법인 경우, 
        transition(decimal, Num);                  // transtition 함수콜 
        return 0;
    }
}

void transition(int decimal, int Num) {             //진법 변환 함수 (인자로 10진수와 변환할 진법을 받음)

    char array[] = "0123456789ABCDEF";            // 출력을 위한 배열 (숫자를 문자로 저장) 
    if (decimal == 0) return;               // 10진법 수가 0이 되면 종료. 
    else {
        transition(decimal / Num, Num);      // 재귀함수 사용해서, 10진수를 진법으로 나눈 몫을 인자로 다시 돌아감
        printf("%c", array[decimal % Num]);      //10진수를 진법으로 나눈 나머지 출력    
    }
}