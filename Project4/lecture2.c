#include <stdio.h>
#include <stdlib.h>


struct Student {
    int sno;
    char name[10];
    int score;
};


int main(void)
    {
        int num_students;
        printf("학생 수 입력: ");
        scanf_s("%d", &num_students);

        struct Student* std;
        std = (struct Student*)malloc(sizeof(struct Student) * num_students);

        for (int i = 0; i < num_students; i++) {

            printf("학생 #%d-%d 성적 입력: ", num_students, i + 1);
            scanf_s("%d", &(std[i].sno));


            printf("학생 #%d-%d 성적 입력: ", num_students, i + 1);
            scanf_s("%d", std[i].name, 10);

            printf("학생 #%d-%d 성적 입력: ", num_students, i + 1);
            scanf_s("%d", &(std[i]).sno);
        }

        int sum = 0;
        for (int i = 0; i < num_students; i++) {
            sum += std[i].score;
        }
        printf("%d\n", sum);

        return 0;
    }
   