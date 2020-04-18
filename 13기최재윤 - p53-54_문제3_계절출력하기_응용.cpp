/* =================================================
** 프로그램명 : 계절 출력하기(if문으로 해결하기) 
** 작성자 : 2학년 3반 17번 최재윤 
================================================= */ 
#include <stdio.h>
int main()
{
	//변수 선언 
	int s;
	//입력 
	printf("계절 출력 프로그램!\n\n");
	printf("월 입력(1 ~ 12) : ");
	scanf("%d", &s);
	
	
	printf("season : ");
	
	if (s == 12 || s == 1 || s == 2)
		printf("winter");
	
	else if (s == 3 || s == 4 || s == 5)
		printf("spring");
		
	else if (s == 6 || s == 7 || s == 8)
		printf("summer");

	else
		printf("fall");
		
	return 0;
}
