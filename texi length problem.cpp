#include <stdio.h>

int main()
{
	typedef struct {
		int x;
		int y;
	}dot;
	
	dot p1, p2;
	int d=0;
	
	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);
	
	if (p1.x > p2.x)
		d += p1.x - p2.x;
	else
		d += p2.x - p1.x;
		
	if (p1.y > p2.y)
		d += p1.y - p2.y;
	else
		d += p2.y - p1.y;
	
	printf("%d", d);
	
	return 0;
}
