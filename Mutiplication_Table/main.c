#include <stdio.h>

int main() {
    int mode; // 모드 선택 변수
    printf("모드를 선택하세요:\n");
    printf("1: 특정 단 출력\n");
    printf("2: 모든 단 출력 (오름차순 또는 내림차순 선택 가능)\n");
    printf("선택: ");
    scanf_s("%d", &mode);

    if (mode == 1) {
        // 특정 단만 출력하는 기능
        int specific_table;
        printf("출력할 구구단을 입력하세요 (1 ~ 9): ");
        scanf_s("%d", &specific_table);

        if (specific_table >= 1 && specific_table <= 9) {
            printf("==== %d 단 ====\n", specific_table);
            for (int j = 1; j <= 9; j++) {
                printf("%2d x %2d = %2d\n", specific_table, j, specific_table * j);
            }
        }
        else {
            printf("잘못된 입력입니다. 1에서 9 사이의 숫자를 입력하세요.\n");
        }

    }
    else if (mode == 2) {
        // 모든 단 출력 (오름차순 또는 내림차순)
        int order;
        printf("출력 순서를 선택하세요 (1: 오름차순, 2: 내림차순): ");
        scanf_s("%d", &order);

        if (order == 1) {
            // 오름차순 출력
            for (int i = 1; i <= 9; i++) {
                printf("==== %d 단 ====\n", i);
                for (int j = 1; j <= 9; j++) {
                    printf("%2d x %2d = %2d\n", i, j, i * j);
                }
                printf("----------------------\n"); // 구분선 추가
            }
        }
        else if (order == 2) {
            // 내림차순 출력
            for (int i = 9; i >= 1; i--) {
                printf("==== %d 단 ====\n", i);
                for (int j = 1; j <= 9; j++) {
                    printf("%2d x %2d = %2d\n", i, j, i * j);
                }
                printf("----------------------\n"); // 구분선 추가
            }
        }
        else {
            printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
        }

    }
    else {
        // 잘못된 모드 선택 처리
        printf("잘못된 선택입니다. 프로그램을 종료합니다.\n");
    }

    printf("구구단 출력이 완료되었습니다.\n");
    return 0;
}
