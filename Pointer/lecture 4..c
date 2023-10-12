#include <stdio.h>

int main(void)
{
	int score[5] = { 87, 92, 94, 65, 33 };

	//int*p_score = score1;
	int* p_score = &score[1];

	for (int i = 0; i < 3; i++) {
		printf("%d\n", *p_score);
		p_score++;
	}

	return 0;
}