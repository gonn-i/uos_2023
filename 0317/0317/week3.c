#include <stdio.h>

int main(void) {

	char name[50]; //�̸��� �ڷ��� ���ڿ��� ����
	printf("�̸� �Է�: "); //�̸��� �Է��ϵ��� �޽���â ���
	scanf_s("%s", name, sizeof(name)); //�̸��� �Է¹���

	int birth; //������� �ڷ��� ������ ����
	printf("��������� �Է��ϼ���: "); //��������� �Է��ϵ��� �޽���â ���
	scanf_s("%i", &birth); //��������� �Է¹���

	int studNum; //�й� �ڷ��� ������ ����
	printf("�й��� �Է��ϼ���: "); //�й��� �Է��ϵ��� �޽���â ���
	scanf_s("%i", &studNum); //�й��� �Է¹���

	char department[50];  //�а� �ڷ��� ���ڿ��� ����
	printf("�а��� �Է��ϼ��� : ");  //�а��� �Է��ϵ��� �޽���â ���
	scanf_s("%s", department, sizeof(department)); //�а��� �Է¹���

	printf("-�̸� : %s \n-������� : %i \n-�й� : %i \n-�а���: %s", name, birth, studNum, department);
	// ��� �Է°�(����)�� ���
	return 0;
}