#include<stdio.h>
#include<stdlib.h>

int main() {
    int numStudent;
    printf("�л� �� �Է� : ");
    scanf_s("%d", &numStudent);

    int* scores;
    scores = (int*)malloc(sizeof(int) * numStudent);

    for (int i = 0; i < numStudent; i++) {
        printf("�л� #%d-%d ���� �Է�: ", numStudent, i + 1);
        scanf_s("%d", scores + i);
    }

    int sum = 0;
    for (int i = 0; i < numStudent; i++) {
        sum += scores[i];
    }
    printf("����: %d\n", sum);
    printf("��� ����: %d\n", sum / numStudent);

    return 0;
}