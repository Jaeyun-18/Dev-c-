/* ==============================
** ���α׷��� : ������ �� ��� 
** �ۼ��� : 2�г� 3�� 18�� ������ 
============================== */ 
#include <stdio.h>

int main()
{
	//���� ���� 
	int n;
	//�ʿ��� ������ �ִٸ� �߰��� ������ ��!!!!
	 
	
	//�Է�
	printf("������ ũ�� �Է�(10���� ������ �Է�) : ");
	scanf("%d", &n); 
    
    //ó�� �� ���  
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
