#include <stdio.h>
#include "header1.h"

int main(void) {

	// �Ķ���� �ִ� �Ҽ� �Ǻ� �Լ� ��
	int Num1 = 19;
	prime_para(Num1);

	// �Ķ���� ���� �Ҽ� �Ǻ� �Լ� ��
	prime();

	// �Ķ���� �ִ� �ִ����� �Լ� ��
	int a = 12, b = 30;
	max_para(a, b);

	// �Ķ���� ���� �ִ����� �Լ� ��
	max();

	// �Ķ���� �ִ� �ּҰ���� �Լ� �� 
	min_para(a, b);

	// �Ķ���� ���� �ּҰ���� �Լ� �� 
	min();

	return 0;
}