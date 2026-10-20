#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
	system("chcp 1251");
	char sport;
	int start, end;
	printf("Cистема хронометража на спортивных соревнованиях\n");
	while (1) {
		printf("Введите код спротсмена('!'- чтобы выйти): ");
		scanf(" %c", &sport);

		if (sport == '!') {
			break;
		}
		printf("Время старта в секундах: ");
		scanf("%d", &start);
		printf("Время финиша в секундах: ");
		scanf("%d", &end);
		printf("Спортсмен %c: ", sport);
		process_stage(start, end);
	}
	return 0;
}
