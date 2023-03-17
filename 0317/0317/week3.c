#include <stdio.h>

int main(void) {

	char name[50]; //이름의 자료형 문자열로 설정
	printf("이름 입력: "); //이름을 입력하도록 메시지창 출력
	scanf_s("%s", name, sizeof(name)); //이름을 입력받음

	int birth; //생년월일 자료형 정수로 설정
	printf("생년월일을 입력하세요: "); //생년월일을 입력하도록 메시지창 출력
	scanf_s("%i", &birth); //생년월일을 입력받음

	int studNum; //학번 자료형 정수로 설정
	printf("학번을 입력하세요: "); //학번을 입력하도록 메시지창 출력
	scanf_s("%i", &studNum); //학번을 입력받음

	char department[50];  //학과 자료형 문자열로 설정
	printf("학과를 입력하세요 : ");  //학과를 입력하도록 메시지창 출력
	scanf_s("%s", department, sizeof(department)); //학과를 입력받음

	printf("-이름 : %s \n-생년월일 : %i \n-학번 : %i \n-학과명: %s", name, birth, studNum, department);
	// 모든 입력값(정보)를 출력
	return 0;
}