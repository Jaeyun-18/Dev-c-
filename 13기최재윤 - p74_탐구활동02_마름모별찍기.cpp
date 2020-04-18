/* ==============================
** 프로그램명 : 마름모 별 찍기 
** 작성자 : 2학년 3반 18번 최재윤 
============================== */ 
#include <stdio.h>

int main()
{
	//변수 선언 
	int n;
	//필요한 변수가 있다면 추가로 선언할 것!!!!
	 
	
	//입력
	printf("마름모 크기 입력(10이하 정수로 입력) : ");
	scanf("%d", &n); 
    
    //처리 및 출력  
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n-1; j++)
			printf(" ");
		
		for(int j=0; j<2*i+1; j++)
			printf("*");
		printf("\n");
	}
	
	for(int i=n-1; i>0; i--)
	{
		for(int j=i; j<n; j++)
			printf(" ");
		
		for(int j=0; j<i*2-1; j++)
			printf("*");
		printf("\n");
	}
	
    return 0; 
}
