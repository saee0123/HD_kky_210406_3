#include<stdio.h>

void main() {

	float _PI = 3.141592;
	int _r = 0;


	printf ("������ ���� �Է��� �ּ���.\n", _r);
	scanf_s("%d", &_r);
	fseek(stdin, 0, SEEK_END);

	float _circle = _r / 2;

	printf("���� ���� = %f, ���� �ѷ� = %f", _PI * _circle, _PI * (_circle * _circle));

	fgetc(stdin);
}