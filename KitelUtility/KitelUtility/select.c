#include <stdio.h>
#include "select.h"

void show_main() {
	printf("============키텔 유틸리티 프로그램============\n");
	printf("[1] 일반 계산기\n");
	printf("[2] 공학용 계산기\n");
	printf("[0] 종료\n");
	printf("==============================================\n");
}

void show_general() {
	printf("=================일반 계산기==================\n");
	printf("[1] 한자리 수 계산기\n");
	printf("[2] 두자리 수 계산기\n");
	printf("[3] 문자열 계산기\n");
	printf("[0] 뒤로\n");
	printf("==============================================\n");
}
void show_engineer() {
	printf("=================공학용 계산기================\n");
	printf("[1] 한자리 수 계산기\n");
	printf("[2] 두자리 수 계산기\n");
	printf("[3] 16진수 계산기\n");
	printf("[4] 8진수 계산기\n");
	printf("[0] 뒤로\n");
	printf("==============================================\n");
}
void show_general_one() {
	printf("[1] Spart [2] 1/x \n");
}
void show_general_two() {
	printf("[1] - [2] + [3] / [4] * [5] %% \n");
}
void show_engineer_one() {
	printf("[1] tan [2] sin [3] cos [4] 절대값 [5] 지수값 \n");
	printf("[6] n! [7] log [8] PI\n");
	printf("[9] INT [10] Hex [11] Oct [12] Binary\n");
	printf("[13] AsSin [14] AcCos [15] AcTan [16] Hypersin\n");
	printf("[17] HyperCos [18] HyperTan\n");
	printf("[0] 뒤로\n");
}
void show_engineer_two() {
	printf("[1] - [2] + [3] / [4] * [5] Exp \n");
	printf("[6] a^b [7] and [8] Mod [9] Or [10] Xor\n");
	printf("[11] << [12] Pita \n");
	printf("[0] 뒤로\n");
}


int select_main() {
	int input = 0;
	show_main();
	scanf_s("%d", &input);
	while (input != 0) {
		if (input == MAIN_GENERAL) {
			return MAIN_GENERAL;
		}
		else if (input == MAIN_ENGINEER) {
			return MAIN_ENGINEER;
		}
		else {
			return SELECT_FALSE;
		}
	}
	return MAIN_END;
}

int select_general() {
	int input = 0;
	show_general();
	scanf_s("%d", &input);
	while (input != BACK) {
		if (input == GENERAL_ONE) {
			return GENERAL_ONE;
		}
		else if (input == GENERAL_TWO) {
			return GENERAL_TWO;
		}
		else if (input == GENERAL_STRING) {
			return GENERAL_STRING;
		}
		else {
			return SELECT_FALSE;
		}
	}
	return BACK;
}

int select_engineer() {
	int input = 0;
	show_engineer();
	scanf_s("%d", &input);
	while (input != BACK) {
		if (input == ENGINEER_ONE) {
			return ENGINEER_ONE;
		}
		else if (input == ENGINEER_TWO) {
			return ENGINEER_TWO;
		}
		else if (input == ENGINEER_HEX) {
			return ENGINEER_HEX;
		}
		else if (input == ENGINEER_OCT) {
			return ENGINEER_OCT;
		}
		else {
			return SELECT_FALSE;
		}
	}
	return BACK;
}