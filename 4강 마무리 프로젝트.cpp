#include <stdio.h>
#include <math.h>

int main()
{
	float r1, r2; //�� ���� ������
	float x1, y1, z1, x2, y2, z2;  //�� ���� �߽��� ��ǥ 
	float R; //�� ���� �߽ɻ����� �Ÿ�
	
	printf("ù��° ���� �߽��� ��ǥ�� �Է��ϼ��� : ");
	scanf("%f %f %f", &x1, &y1, &z1);
	
	printf("ù��° ���� �������� �Է��ϼ��� : ");
	scanf("%f", &r1);
	
	printf("�ι�° ���� �߽��� ��ǥ�� �Է��ϼ��� : ");
	scanf("%f %f %f", &x2, &y2, &z2);
	
	printf("�ι�° ���� �������� �Է��ϼ��� : ");
	scanf("%f", &r2); 
	
	R = sqrt( pow((x1-x2),2) + pow((y1-y2),2) + pow((z1-z2),2)); // ��ǥ �����󿡼� ���� �� ������ �Ÿ� ���� 
	
	if (R == r1+r2) printf("�� ���� �����ִ�.");
	else if (R < r1+r2) printf("�� ���� �浹�ߴ�.");
	else printf("�� ���� ������ �ʾҴ�.");
	
	return 0; 
} 
