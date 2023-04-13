#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// transition �Լ���
void transition(int decimal, int Num);

//main �Լ� 
int main(void) {

    int decimal, Num;  //�Էµ� 10����(decimal)�� ��ȯ�� ����(Num) ������ ���� 

    printf("��ȯ�� 10���� �Է�: ");  //10���� �Է¹ޱ� ���� �޽���
    scanf_s("%d", &decimal);          //10���� �Է� �ޱ� 

    printf("��ȯ�� ���� �Է� (2-16): ");   //��ȯ�� ������ �ޱ� ���� �޽���
    scanf_s("%d", &Num);                      //��ȯ�� ���� �Է� �ޱ� 

    if (Num > 16 || Num < 2) printf("2~16 ������ ���ڸ� �������ּ���,");  //2-16 ������ ������ �ƴ� ��� 
    else {
        printf("%d�� %d���� ��ȯ ��:", decimal, Num);   //2-16 ������ ������ ���, 
        transition(decimal, Num);                  // transtition �Լ��� 
        return 0;
    }
}

void transition(int decimal, int Num) {             //���� ��ȯ �Լ� (���ڷ� 10������ ��ȯ�� ������ ����)

    char array[] = "0123456789ABCDEF";            // ����� ���� �迭 (���ڸ� ���ڷ� ����) 
    if (decimal == 0) return;               // 10���� ���� 0�� �Ǹ� ����. 
    else {
        transition(decimal / Num, Num);      // ����Լ� ����ؼ�, 10������ �������� ���� ���� ���ڷ� �ٽ� ���ư�
        printf("%c", array[decimal % Num]);      //10������ �������� ���� ������ ���    
    }
}