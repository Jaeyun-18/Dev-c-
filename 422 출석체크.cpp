#include <stdio.h>
/*
int n=10;
void func1();
int func2();
void func3();

int main() {
	
	func1();
	n=20;
	func2();
	func3();
	printf("%d", n);
	
	return 0;
}

void func1() { n=n/5;}
int func2() { 
	int n=0; 
	n=n+1;
	return n; 
}
void func3() { n=n-1;}

*/

void swap(int *a, int *b);

int main()
{
	int a=3, b=5;
	swap(&a, &b);
	
	printf("%d %d", a,b);
}

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	
	printf("%d %d\n", *a,*b); 
}
