#include <stdio.h>

void prn(char *c);

int main()
{
	int k=100;
	char s[][10] = {"computer", "LOVE", "Wed", "py", "c"};
	
	prn(s[(k>>4)%5]);
	
	return 0;
}

void prn(char *c)
{
	printf("%s\n", c);
}
