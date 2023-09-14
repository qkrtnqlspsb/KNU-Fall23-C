#include <stdio.h>
#include <stdio.h>

int main(void)
{
	system("title 정수 1개 입력 후 출력");

	int num;
	printf("1. 정수입력:");
	scanf_s("%d", &num);
	printf("2. 키보드로 입력받은 값은 %d 입니다. \n", num);
	return 0;
}