#include <stdio.h>
int main() {
    int start, end;
    printf("시작 단과 끝 단을 입력하세요: ");
    scanf_s("%d %d", &start, &end); 
    for (int i = start; i <= end; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%2d x %2d = %2d\n", i, j, i * j);
        }
        printf("==== %d 단 ====\n", i);
        printf("\n");
    }
    return 0;
}
