#include <stdio.h>
#include <math.h>

int main()
{
	float r1, r2; //두 구의 반지름
	float x1, y1, z1, x2, y2, z2;  //두 구의 중심의 좌표 
	float R; //두 구의 중심사이의 거리
	
	printf("첫번째 구의 중심의 좌표를 입력하세요 : ");
	scanf("%f %f %f", &x1, &y1, &z1);
	
	printf("첫번째 구의 반지름을 입력하세요 : ");
	scanf("%f", &r1);
	
	printf("두번째 구의 중심의 좌표를 입력하세요 : ");
	scanf("%f %f %f", &x2, &y2, &z2);
	
	printf("두번째 구의 반지름을 입력하세요 : ");
	scanf("%f", &r2); 
	
	R = sqrt( pow((x1-x2),2) + pow((y1-y2),2) + pow((z1-z2),2)); // 좌표 공간상에서 점과 점 사이의 거리 공식 
	
	if (R == r1+r2) printf("두 구는 접해있다.");
	else if (R < r1+r2) printf("두 구는 충돌했다.");
	else printf("두 구는 만나지 않았다.");
	
	return 0; 
} 
