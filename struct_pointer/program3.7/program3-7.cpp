#include <stdio.h>
#define SIZE 6
#define _CRT_SECURE_NO_WARNINGS


void get_integer(int list[]) {
	printf("6���� ������ �Է��ϼ���.");
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &list[i]);
	}
}

int cal_sum(int list[]) {
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += *(list + i);
	}
	return sum;
}

int main(void) {
	int list[SIZE];
	get_integer(list);
	printf("��=%d \n", cal_sum(list));

	return 0;
}