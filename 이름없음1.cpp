#include <stdio.h>

int main()
{
	float eye_r;
	float eye_1;
	
	printf("양쪽 시력을 입력해주세요. ");
	scanf("%f %f" , &eye_r, &eye_1);
	printf("오른쪽 시력 : %.1f\n윈쪽 시력 : %.1f\n", eye_r, eye_1);
}
