#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	printf("%lf", a*pow(b,(c-1)));
	
	return 0;
}
