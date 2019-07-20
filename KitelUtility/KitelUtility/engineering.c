#include "engineering.h"
#include "engineering_one.h"
#include "select.h"
void engineer_run();

void engineeringCal() {
	printf("���п� ���⸦ �����ϼ̽��ϴ�. \n");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		printf("�ƹ� Ű�� �Է��ϼ���.\n");
		getch();
	}
}


void engineerOne() {
	int number;
	int num;
	printf("[���п�] ���ڸ� �� ���⸦ �����ϼ̽��ϴ�.\n");
	show_engineer_one();
	printf("�Լ� ����:\n");
	scanf_s("%d", &number);

	printf("���� �Է�:\n");
	scanf_s("%d", &num);

	switch (number) {

	case 1: Tan(num); break;
	case 2: Sin(num); break;
	case 3: Cos(num); break;
	case 4: ���밪(num); break;
	case 5: ������(num); break;
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
	printf("[���п�] ���ڸ� �� ���⸦ �����ϼ̽��ϴ�.\n");
	show_engineer_two();
}
void engineerHex() {
	printf("[���п�] 16���� ���⸦ �����ϼ̽��ϴ�.\n");

}
void engineerOct() {
	printf("[���п�] 8���� ���⸦ �����ϼ̽��ϴ�.\n");

}