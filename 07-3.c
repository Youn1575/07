#include <stdio.h>
#include <stdlib.h>

int inc(int counter); // �Լ� ������ ����

int main(int argc, char *argv[]) {
    int i = 0; // i�� �ʱ�ȭ

    printf("�Լ� ȣ���� i=%d\n", i);
    i = inc(i); // �Լ� ȣ�� �� ��ȯ���� i�� �Ҵ�
    printf("�Լ� ȣ���� i=%d\n", i);

    return 0;
}

int inc(int counter) {
    counter++;
    return counter;
}

