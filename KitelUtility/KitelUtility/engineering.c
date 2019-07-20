#include "engineering.h"
#include "engineering_one.h"
#include "select.h"
void engineer_run();

void engineeringCal() {
	printf("공학용 계산기를 선택하셨습니다. \n");
	engineer_run();
}

void engineer_run() {
	int input = 0;
	while (1)
	{
		input = select_engineer();
		if (input == BACK) break;
		switch (input)
		{
		case ENGINEER_ONE:
			engineerOne();
			break;
		case ENGINEER_TWO:
			engineerTwo();
			break;
		case ENGINEER_HEX:
			engineerHex();
			break;
		case ENGINEER_OCT:
			engineerOct();
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			break;
		}
		printf("아무 키나 입력하세요.\n");
		getch();
	}
}


void engineerOne() {
	int number;
	int num;
	printf("[공학용] 한자리 수 계산기를 선택하셨습니다.\n");
	show_engineer_one();
	printf("함수 선택:\n");
	scanf_s("%d", &number);

	printf("숫자 입력:\n");
	scanf_s("%d", &num);

	switch (number) {

	case 1: Tan(num); break;
	case 2: Sin(num); break;
	case 3: Cos(num); break;
	case 4: 절대값(num); break;
	case 5: 지수값(num); break;
	case 6: n(num); break;
	case 7: Log(num); break;
	case 8: PI(num); break;
	case 9: INT(num); break;
	case 10: HEX(num); break;
	case 11: OCT(num); break;
	case 12: BINARY(num); break;
	case 13: as(num); break;
	case 14: ac(num); break;
	case 15: at(num); break;
	case 16: sh(num); break;
	case 17: ch(num); break;
	case 18: th(num); break;

	}
}
void engineerTwo() {
	printf("[공학용] 두자리 수 계산기를 선택하셨습니다.\n");
	show_engineer_two();
}
void engineerHex() {
	printf("[공학용] 16진수 계산기를 선택하셨습니다.\n");

}
void engineerOct() {
	printf("[공학용] 8진수 계산기를 선택하셨습니다.\n");

}