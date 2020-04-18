#include <stdio.h>
int main()
{
	typedef struct _score {
		int grade, ban, num;
		char name[10];
		int kor, eng, math;
		int hap;
		float avr;
	} Score;
	
	Score s[10];
	FILE *fp; //������ �����Ϳ� �����ϱ� ���� ������ ���� 
	int i, n; 
	
	//����ü�迭2.cpp ���ϰ� st.txxt ������ ������ ������ �־�� ���������� �����. 
	if ((fp = fopen("st.txt", "r")) != NULL)
	{
		fscanf(fp, "%d", &n);  // �� data ���� �ľǿ� ���� 
		printf("==================����ǥ ���=================\n");
		printf("�г� �� ��ȣ  �̸�  ���� ���� ���� ����  ��� \n");
		printf("==============================================\n");
		for(i = 0; i < n; i++)
		{
			fscanf(fp, "%d %d %d %s %d %d %d", &s[i].grade, &s[i].ban, &s[i].num, &s[i].name, &s[i].kor, &s[i].eng, &s[i].math);
			/* // �Ʒ��� ���� ����� �ۼ��ص� ����� ������.  
			fscanf(fp, "%d %d %d ", &s[i].grade, &s[i].ban, &s[i].num);
			fscanf(fp, "%s ", &s[i].name);
			fscanf(fp, "%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);
			*/

			s[i].hap = s[i].kor + s[i].eng + s[i].math;
			s[i].avr = s[i].hap / 3.;
		
			//���� ����� ����� ����ϱ� ���� format�� ��ü������ ����. 
			printf(" %2d  %2d  %2d  ",s[i].grade, s[i].ban, s[i].num) ;
			printf("%6s ", s[i].name) ;
			printf("%3d  %3d  %3d  ", s[i].kor, s[i].eng, s[i].math) ;
			printf("%3d  %6.2f\n", s[i].hap, s[i].avr) ;			
		}
	}
	fclose(fp);
	return 0;

}
