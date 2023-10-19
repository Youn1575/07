#include <stdio.h>
#include <stdlib.h>

int inc(int counter); // 함수 원형을 선언

int main(int argc, char *argv[]) {
    int i = 0; // i를 초기화

    printf("함수 호출전 i=%d\n", i);
    i = inc(i); // 함수 호출 후 반환값을 i에 할당
    printf("함수 호출후 i=%d\n", i);

    return 0;
}

int inc(int counter) {
    counter++;
    return counter;
}

