#include <stdio.h>

int n;
struct matrix { int d[2][2];};  //����� ����ϱ� ���� 2x2 ũ���� �迭�� ���� ����ü matrix�� �����Ѵ�. 

int main( )
{
    matrix m[10], t, tt; 
    
    printf("�Է��� �迭�� ������? ");
    scanf("%d", &n);
  
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<=1; k++)
            scanf("%d %d", &m[i].d[k][0], &m[i].d[k][1]);
    } //n�� �ݺ��Ͽ� ��Ŀ� (0,0) (0,1) (1,0) (1,1) ������ ���ڸ� �����Ѵ�.

    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
        {
            if(i==j) t.d[i][j] = 1;
            else t.d[i][j] = 0;
            //��� t�� ó���� ����� ���� ��, ����� �״�� �����ǰ� �ϱ� ���� {1,0,0,1}�� �����Ѵ�. 
            
            tt.d[i][j] = 0;
            //��� tt�� 0���� �ʱ�ȭ 
        } 

    for(int c=0; c<n; c++)
    {
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                for(int k=0; k<2; k++)
                    tt.d[i][j] += t.d[i][k]*m[c].d[k][j];
        
        /* ����� ���� �ϴ� ���� �����ϸ� 
		{a,b,c,d}�� {1,2,3,4} ����� ���ϸ� {a*1 + b*3 , a*2 + b*4 , c*1 + d*3 , c*2 + d*4}
		������ ���� ��� �ȴ�. ���t �� ���m[c]�� ���Ͽ� ���tt�� �����Ѵ�*/
		 
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
            {
                t.d[i][j] = tt.d[i][j];
                tt.d[i][j] = 0;
            }
    	//���������� ���t�� ���tt�� �����ϰ� ���tt�� 0���� �ʱ�ȭ�Ѵ�. 
    }

	printf("\n\n");
	printf("��� �� ��� ���\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            printf("%d ", t.d[i][j]);
            
        printf("\n");
    } //���������� ����� ������ش�. 
}
