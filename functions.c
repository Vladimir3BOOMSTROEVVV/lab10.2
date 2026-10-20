#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"

int get_duration(int start_sec, int end_sec) {
	return end_sec - start_sec;
}

int check_status(int duration_sec) {
	if (duration_sec < 30) {
		return -1;
	}
	else if (duration_sec < 45) {
		return 1;
	}
	else {
		return 0;
	}
}

int get_full_minutes(int total_sec) {
	return total_sec / 60;
}

void print_time_mm_ss(int minutes, int seconds) {
	printf("%02d:%02d", minutes, seconds);
}

void process_stage(int start_sec, int end_sec) {
	int duratation, status, minutes, seconds;
	
	duratation = get_duration(start_sec, end_sec);
	status = check_status(duratation);
	minutes = get_full_minutes(duratation);
	seconds = duratation % 60;

	printf("Время: ");
	print_time_mm_ss(minutes, seconds);

	if (status == -1) {
		printf("[Дисквалификация]");
	}
	else if (status == 1)
	{
		printf(" [Рекорд!]");
	}
	else
	{
		printf(" [Норма]");
	}
	printf("\n");
}
