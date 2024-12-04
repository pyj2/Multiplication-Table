#include <stdio.h>

int main() {
    int order;
    printf("출력 순서를 선택하세요 (1: 오름차순, 2: 내림차순): ");
    scanf_s("%d", &order);

    if (order == 1) { // 오름차순 출력
        for (int i = 1; i <= 9; i++) {
            printf("==== %d 단 ====\n", i);
            for (int j = 1; j <= 9; j++) {
                printf("%2d x %2d = %2d\n", i, j, i * j);
            }
            printf("----------------------\n"); 
        }
    }
    else if (order == 2) { // 내림차순 출력
        for (int i = 9; i >= 1; i--) {
            printf("==== %d 단 ====\n", i);
            for (int j = 1; j <= 9; j++) {
                printf("%2d x %2d = %2d\n", i, j, i * j);
            }
            printf("----------------------\n");
        }
    }
    else {
        printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
    }

    return 0;
}
