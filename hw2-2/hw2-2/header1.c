#include <stdio.h>


//�Ҽ� �Ǻ� �Լ� _with 
int prime_para(int Num1) {
	int i, cnt =0;
	if (Num1 <= 1) {   //�Է��� ���� 1�� ��� -> �Ҽ� �ƴ�
		printf("% d�� �Ҽ��� �ƴմϴ�.\n", Num1);
		return 1;
	}
	for (int i = 2; i <= Num1; i++) {  // 2 ~ Num1���� �ݺ� 
		if (Num1 % i == 0) {			// ������ �������� ���, cnt�� 1�� ����
			cnt++;
		}

		if (cnt == 1) {						// cnt�� 1�� ��� (�ڱ� �ڽŸ��� ���� ����) -> �Ҽ� 
			printf("% d�� �Ҽ��Դϴ�.\n", Num1);
			return 0;
		}

		else {								// �ٸ� ���� ����� ����  -> �Ҽ��ƴ�
			printf("%d�� �Ҽ��� �ƴմϴ�.\n", Num1);
			return 1;
		}
	}

}

//�Ҽ� �Ǻ� �Լ� _without
int prime(void) {
	int Num1, i;
	int cnt = 0;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &Num1);

	if (Num1 <= 1) {
		printf("% d�� �Ҽ��� �ƴմϴ�.\n", Num1); 
		return 1;
	}
	for (int i = 2; i <= Num1; i++) {
		if (Num1 % i == 0) {
			cnt++;
		}

	if (cnt == 1) {
		printf("% d�� �Ҽ��Դϴ�.\n", Num1);
		return 0;
	}
		
	else { 
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", Num1); 
		return 1; }
	}

}

//�ִ� �����_ with 
int max_para(int a, int b) {
	int i;
	int gcd = 0;
	for (i = 1; i <= a && i <= b; i++) {	// 1���� a���� �۰ų� �����鼭 b���� �۰ų� ���� ������ �ݺ� 
		if (a % i == 0 && b % i == 0)			// a�� ������ �������鼭, b�͵� ������ ������  => gcd
			gcd = i;								
	}
	printf("\n%d�� %d�� �ִ� ������� %d\n", a, b, gcd);
	return gcd;
}

//�ִ� �����_ without 
int max(void) {
	int i, a, b;
	int gcd =0;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &a);

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &b);

	for (i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b% i == 0)
			gcd = i;
	}
	printf("%d�� %d�� �ִ� ������� %d\n", a, b, gcd);
	return gcd;
}

// �ּ� �����_with 
int min_para(int a, int b) {

	int result = max_para(a, b);	//�ִ� ����� ��
	int lcm;
	lcm = a * b / result;			// (�ּ� �����) = (�� ���� �� / �ִ� �����) 
	printf("%d�� %d�� �ּ� ������� %d\n", a, b, lcm);
	return lcm;
}

// �ּ� �����_without
int min(void) {
	int a, b,i,gcd;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &a);

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &b);

	for (i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	int lcm;
	lcm = a * b / gcd;
	printf("%d�� %d�� �ּ� ������� %d\n", a, b, lcm);
	return lcm;
}

