#include <stdio.h>

int main()
{
	int n;
	int a[10][10] = {0, };
	
	printf("출력할 줄의 수를 입력하세요 (n <= 7) : ");
	scanf("%d", &n);
	
	for (int i=0; i<n+1; i++)
	{
		for (int j=0; j<n-i; j++)
			printf(" ");
		
		if (i == 0)
		{
			a[0][1] = 1;
			printf(" ");
			printf("1");
		}
		
		else
		{
			for (int j=0; j<=i; j++)
			{
				int num;
				num = a[i-1][j] + a[i-1][j+1];
				a[i][j+1] = num;
				if(num >= 10)
				{
					printf(" ");
					printf("%2d", num);
				}
					
				else
				{
					printf("%2d", num);
				}
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
