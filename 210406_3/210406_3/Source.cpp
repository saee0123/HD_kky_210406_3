#include<stdio.h>

void main() {

	float _PI = 3.141592;
	int _r = 0;


	printf ("정수형 값을 입력해 주세요.\n", _r);
	scanf_s("%d", &_r);
	fseek(stdin, 0, SEEK_END);

	float _circle = _r / 2;

	printf("원의 넓이 = %f, 원의 둘레 = %f", _PI * _circle, _PI * (_circle * _circle));

	fgetc(stdin);
}