/* =================================================
** ���α׷��� : ���� ����ϱ�(if������ �ذ��ϱ�) 
** �ۼ��� : 2�г� 3�� 17�� ������ 
================================================= */ 
#include <stdio.h>
int main()
{
	//���� ���� 
	int s;
	//�Է� 
	printf("���� ��� ���α׷�!\n\n");
	printf("�� �Է�(1 ~ 12) : ");
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
