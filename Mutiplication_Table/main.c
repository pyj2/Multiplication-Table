#include <stdio.h>

int validate_input(int start, int end) { 
    if (start < 1 || end > 9 || start > end) return 0;
    return 1;
}

void print_table(int start, int end) { 
    for (int i = start; i <= end; i++) {
        printf("==== %d 단 ====\n", i);
        for (int j = 1; j <= 9; j++) {
            printf("%2d x %2d = %2d\n", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {
    int start, end;
    printf("시작 단과 끝 단을 입력하세요: ");
    // 예: 시작 단과 끝 단을 입력하세요: 2 5
    // 2단부터 5단까지 출력됩니다.
    if (scanf_s("%d %d", &start, &end) != 2) {
        printf("숫자를 입력하세요.\n");
        return 1;
    }

    if (!validate_input(start, end)) {
        printf("잘못된 입력입니다. 1~9 범위의 값을 올바르게 입력하세요.\n");
        return 1;
    }

    print_table(start, end); 
    return 0;
}
