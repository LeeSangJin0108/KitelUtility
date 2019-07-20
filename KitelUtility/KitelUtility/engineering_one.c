#include "engineering_one.h"
#include "select.h"
#include"math.h"


double Tan(double x) {
	double result;
	result = tan(x);
	printf("= \n");
	printf("%lf\n", result);
	return 0;
}
double Sin(double x) {
	double result;
	result = sin(x);
	printf("= \n");
	printf("%lf\n", result);
	return 0;
}
double Cos(double x) {
	double result;
	result = cos(x);
	printf("= \n");
	printf("%lf\n", result);
	return 0;
}
double 절대값(double x) {
	double result = 0;
	result = fabs(x);
	printf("= \n");
	printf("%lf\n", result);
	return 0;
}
double 지수값(double x) {
	printf("= \n");
	printf("%.1|e\n", x);
}
double n(double x) {
	double re = 1;
	for (; x > 0; x--) {
		re *= x;
		return re;
	}
}
void Log(double x) {
	printf("= \n");
	printf("%lf\n", log(x));
}
void PI(double x) {
	double p = 3.1415926535;
	double result;

	result = (double) x*p;
	printf("= \n");
	printf("%lf\n", result);
}
void INT(double x) {
	printf("= \n");
	printf("%lf\n", (int)x);
}
void HEX(double x) {
	int a;
	a = (int)x;
	printf("16진수 : %x\n", a);
}
void OCT(double x) {
	int a;
	a = (int)x;
	printf("8진수 : %o\n", a);
}
void BINARY(double x) {
	int binary = 0;
	int i = 1;
	int j;
	int a;
	a = (int)x;
	for (j = a; j > 0; j--) {
		binary = binary + (a % 2)*i;
		i *= 10;
		a /= 2;
	}
	printf("2진수 : %d\n", binary);
}

void as(double x) {
	printf("ArcSin of %f=%f\n", x, asin(x));
}
void ac(double x) {
	printf("ArcCos of %f=%f\n", x, acos(x));
}
void at(double x) {
	printf("ArcTan of %f=%f\n", x, atan(x));
}
void sh(double x) {
	printf("HyperbolicSin of %f=%f\n", x, sinh(x));
}
void ch(double x) {
	printf("HyperbolicCos of %f=%f\n", x, cosh(x));
}
void th(double x) {
	printf("HyperbolicTan of %f=%f\n", x, tanh(x));
}


