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
			printf("Работа программы завершена.");
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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct point {
	float x;
	float y;
	char name;
};

typedef struct point Point;

void put_point(Point z);
float dist(Point z, Point w);
Point mid(Point z, Point w);

void main() {
	t1();
}

void put_point(Point z) {

	printf("point %c (%.1f, %.1f)", z.name, z.x, z.y);
}

float dist(Point z,Point w) {
	return sqrt(pow(w.x - z.x, 2) + pow(w.y - z.y, 2));
}

Point mid(Point z, Point w) {
	Point m;
	m.name = "M";
	m.x = (z.x + w.x) / 2.0;
	m.y = (z.y + w.y) / 2.0;
	return m;
}


void t1() {
	Point a, b, m;

	a.name = 'A';
	b.name = 'B';

	printf("Введите значение для точки A(x,y)");
	scanf("%f %f", &a.x, &a.y);
	printf("Введите значение для точки B(x,y)");
	scanf("%f %f", &b.x, &b.y);
	printf("Точки:");
	put_point(a);
	put_point(b);
	printf("\nРасстояние междуточками: %.2f", dist(a, b));
	m = mid(a, b);
	printf("Середина отрезка: ");
	put_point(m);
	return 0;
}
