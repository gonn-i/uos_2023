#include <stdio.h>


//소수 판별 함수 _with 
int prime_para(int Num1) {
	int i, cnt =0;
	if (Num1 <= 1) {   //입력한 수가 1인 경우 -> 소수 아님
		printf("% d는 소수가 아닙니다.\n", Num1);
		return 1;
	}
	for (int i = 2; i <= Num1; i++) {  // 2 ~ Num1까지 반복 
		if (Num1 % i == 0) {			// 나누어 떨어지는 경우, cnt은 1씩 증가
			cnt++;
		}

		if (cnt == 1) {						// cnt이 1인 경우 (자기 자신만이 수를 나눔) -> 소수 
			printf("% d는 소수입니다.\n", Num1);
			return 0;
		}

		else {								// 다른 수를 약수로 가짐  -> 소수아님
			printf("%d는 소수가 아닙니다.\n", Num1);
			return 1;
		}
	}

}

//소수 판별 함수 _without
int prime(void) {
	int Num1, i;
	int cnt = 0;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &Num1);

	if (Num1 <= 1) {
		printf("% d는 소수가 아닙니다.\n", Num1); 
		return 1;
	}
	for (int i = 2; i <= Num1; i++) {
		if (Num1 % i == 0) {
			cnt++;
		}

	if (cnt == 1) {
		printf("% d는 소수입니다.\n", Num1);
		return 0;
	}
		
	else { 
		printf("%d는 소수가 아닙니다.\n", Num1); 
		return 1; }
	}

}

//최대 공약수_ with 
int max_para(int a, int b) {
	int i;
	int gcd = 0;
	for (i = 1; i <= a && i <= b; i++) {	// 1부터 a보다 작거나 같으면서 b보다 작거나 같은 수까지 반복 
		if (a % i == 0 && b % i == 0)			// a와 나누어 떨어지면서, b와도 나누어 떨어짐  => gcd
			gcd = i;								
	}
	printf("\n%d와 %d의 최대 공약수는 %d\n", a, b, gcd);
	return gcd;
}

//최대 공약수_ without 
int max(void) {
	int i, a, b;
	int gcd =0;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &a);

	printf("숫자를 입력하시오: ");
	scanf_s("%d", &b);

	for (i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b% i == 0)
			gcd = i;
	}
	printf("%d와 %d의 최대 공약수는 %d\n", a, b, gcd);
	return gcd;
}

// 최소 공배수_with 
int min_para(int a, int b) {

	int result = max_para(a, b);	//최대 공약수 콜
	int lcm;
	lcm = a * b / result;			// (최소 공배수) = (두 수의 곱 / 최대 공약수) 
	printf("%d와 %d의 최소 공배수는 %d\n", a, b, lcm);
	return lcm;
}

// 최소 공배수_without
int min(void) {
	int a, b,i,gcd;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &a);

	printf("숫자를 입력하시오: ");
	scanf_s("%d", &b);

	for (i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0)
			gcd = i;
	}
	int lcm;
	lcm = a * b / gcd;
	printf("%d와 %d의 최소 공배수는 %d\n", a, b, lcm);
	return lcm;
}

