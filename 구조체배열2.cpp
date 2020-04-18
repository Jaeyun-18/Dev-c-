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
	FILE *fp; //파일의 데어터에 접근하기 위한 포인터 변수 
	int i, n; 
	
	//구조체배열2.cpp 파일과 st.txxt 파일이 동일한 폴더에 있어야 정상적으로 실행됨. 
	if ((fp = fopen("st.txt", "r")) != NULL)
	{
		fscanf(fp, "%d", &n);  // 총 data 개수 파악용 변수 
		printf("==================성적표 출력=================\n");
		printf("학년 반 번호  이름  국어 영어 수학 총점  평균 \n");
		printf("==============================================\n");
		for(i = 0; i < n; i++)
		{
			fscanf(fp, "%d %d %d %s %d %d %d", &s[i].grade, &s[i].ban, &s[i].num, &s[i].name, &s[i].kor, &s[i].eng, &s[i].math);
			/* // 아래와 같이 나누어서 작성해도 결과는 동일함.  
			fscanf(fp, "%d %d %d ", &s[i].grade, &s[i].ban, &s[i].num);
			fscanf(fp, "%s ", &s[i].name);
			fscanf(fp, "%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);
			*/

			s[i].hap = s[i].kor + s[i].eng + s[i].math;
			s[i].avr = s[i].hap / 3.;
		
			//좀더 깔끔한 결과를 출력하기 위해 format을 구체적으로 지정. 
			printf(" %2d  %2d  %2d  ",s[i].grade, s[i].ban, s[i].num) ;
			printf("%6s ", s[i].name) ;
			printf("%3d  %3d  %3d  ", s[i].kor, s[i].eng, s[i].math) ;
			printf("%3d  %6.2f\n", s[i].hap, s[i].avr) ;			
		}
	}
	fclose(fp);
	return 0;

}
