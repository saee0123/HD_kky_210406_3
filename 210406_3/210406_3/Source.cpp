/*
사용자로부터 원의 지름을 정수로 받아 원의 둘레 길이, 원의 넓이 를 출력하는 프로그램을 만들으세요
(PI= 3.141592이고, 원의 넓이 = PI * r *r  , 원의 둘레 = PI * 2 * r 이다)
*/

#include<stdio.h>

void main() {

	float _PI = 3.141592;
	int _r = 0;


	printf ("정수형 값을 입력해 주세요.\n", _r);
	scanf_s("%d", &_r);
	fseek(stdin, 0, SEEK_END);

	float _circle = _r / 2;

	printf("원의 넓이 = %f, 원의 둘레 = %f", _PI * _r, _PI * (_circle * _circle));

	fgetc(stdin);
}
