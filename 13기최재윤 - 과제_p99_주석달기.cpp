#include <stdio.h>

int n;
struct matrix { int d[2][2];};  //행렬을 계산하기 위해 2x2 크기의 배열을 가진 구조체 matrix를 선언한다. 

int main( )
{
    matrix m[10], t, tt; 
    
    printf("입력할 배열의 갯수는? ");
    scanf("%d", &n);
  
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<=1; k++)
            scanf("%d %d", &m[i].d[k][0], &m[i].d[k][1]);
    } //n번 반복하여 행렬에 (0,0) (0,1) (1,0) (1,1) 순서로 숫자를 대입한다.

    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
        {
            if(i==j) t.d[i][j] = 1;
            else t.d[i][j] = 0;
            //행렬 t는 처음에 행렬을 곱할 때, 행렬이 그대로 유지되게 하기 위해 {1,0,0,1}로 저장한다. 
            
            tt.d[i][j] = 0;
            //행렬 tt는 0으로 초기화 
        } 

    for(int c=0; c<n; c++)
    {
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                for(int k=0; k<2; k++)
                    tt.d[i][j] += t.d[i][k]*m[c].d[k][j];
        
        /* 행렬의 곱을 하는 법을 설명하면 
		{a,b,c,d}와 {1,2,3,4} 행렬을 곱하면 {a*1 + b*3 , a*2 + b*4 , c*1 + d*3 , c*2 + d*4}
		다음과 같이 계산 된다. 행렬t 와 행렬m[c]을 곱하여 행렬tt에 저장한다*/
		 
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
            {
                t.d[i][j] = tt.d[i][j];
                tt.d[i][j] = 0;
            }
    	//최종적으로 행렬t에 행렬tt를 저장하고 행렬tt를 0으로 초기화한다. 
    }

	printf("\n\n");
	printf("행렬 곱 계산 결과\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            printf("%d ", t.d[i][j]);
            
        printf("\n");
    } //최종적으로 행렬을 출력해준다. 
}
