#include <stdio.h>
#include "header1.h"

int main(void) {

	// 파라미터 있는 소수 판별 함수 콜
	int Num1 = 19;
	prime_para(Num1);

	// 파라미터 없는 소수 판별 함수 콜
	prime();

	// 파라미터 있는 최대공약수 함수 콜
	int a = 12, b = 30;
	max_para(a, b);

	// 파라미터 없는 최대공약수 함수 콜
	max();

	// 파라미터 있는 최소공배수 함수 콜 
	min_para(a, b);

	// 파라미터 없는 최소공배수 함수 콜 
	min();

	return 0;
}