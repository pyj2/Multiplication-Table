#include <stdio.h>

// 입력값을 검증하는 함수
int validate_input(int start, int end) {
    if (start < 1 || end > 9 || start > end) return 0;
    return 1;
}

// 구구단을 출력하는 함수 (범위 지정)
void print_table(int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("==== %d 단 ====\n", i);
        for (int j = 1; j <= 9; j++) {
            printf("%2d x %2d = %2d\n", i, j, i * j);
        }
        printf("\n");
    }
}

// 구구단을 출력하는 함수 (순서 지정)
void print_ordered_table(int order) {
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
}

int main() {
    int mode;
    printf("모드를 선택하세요 (1: 범위 출력, 2: 특정 단 출력, 3: 순서 출력): ");
    scanf_s("%d", &mode);

    if (mode == 1) {
        int start, end;

        // 사용자 입력 예시 제공
        printf("시작 단과 끝 단을 입력하세요 (예: 2 5): ");
        // 예: 시작 단과 끝 단을 입력하세요: 2 5
        // 2단부터 5단까지 출력됩니다.

        // 사용자 입력을 처리
        if (scanf_s("%d %d", &start, &end) != 2) {
            printf("숫자를 입력하세요.\n");
            return 1;
        }

        // 입력값 검증
        if (!validate_input(start, end)) {
            printf("잘못된 입력입니다. 1~9 범위의 값을 올바르게 입력하세요.\n");
            printf("프로그램을 종료합니다.\n");
            return 1;
        }

        // 구구단 출력
        print_table(start, end);
    }
    else if (mode == 2) {
        int specific_table;

        // 특정 단만 출력
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
    else if (mode == 3) {
        int order;

        // 순서 출력 모드
        printf("출력 순서를 선택하세요 (1: 오름차순, 2: 내림차순): ");
        scanf_s("%d", &order);

        // 구구단 순서 출력
        print_ordered_table(order);
    }
    else {
        printf("잘못된 입력입니다. 프로그램을 종료합니다.\n");
    }

    return 0;
}
