#include<stdio.h>
#include<stdlib.h>

int main() {
    int numStudent;
    printf("학생 수 입력 : ");
    scanf_s("%d", &numStudent);

    int* scores;
    scores = (int*)malloc(sizeof(int) * numStudent);

    for (int i = 0; i < numStudent; i++) {
        printf("학생 #%d-%d 성적 입력: ", numStudent, i + 1);
        scanf_s("%d", scores + i);
    }

    int sum = 0;
    for (int i = 0; i < numStudent; i++) {
        sum += scores[i];
    }
    printf("%d\n", sum);
    return 0;
}