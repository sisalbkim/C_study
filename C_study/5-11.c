#include <stdio.h>

void main()
{

	int a , b;
	char c;
	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &c, &b);

	switch (c)
	{
		case '+' :
			printf("%d + %d = %d\n", a,b,a+b);
			break;
		case '-' :
			printf("%d - %d = %d\n", a,b,a-b);
			break;
		case '*' :
			printf("%d * %d = %d\n", a,b,a*b);
			break;
		case '/' :
			printf("%d / %d = %d\n", a,b,a/b);
			break;
		default :
			printf("연산 오류입니다\n");
	}
}
