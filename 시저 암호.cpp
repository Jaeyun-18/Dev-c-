#include <stdio.h>
#include <string.h>
int main()
{
	char plaintxt[10], cypertxt[10];
	int i;
	
	scanf("%s", plaintxt);
	
	for (i=0; i < strlen(plaintxt); i++)
	{
		int a;
		a = 65 + ((int(plaintxt[i]) - 65 + 3) % 26);
		cypertxt[i] = char(a);
	}
	
	cypertxt[i] = '\0';
	printf("%s\n", cypertxt);
	
	return 0;
}
