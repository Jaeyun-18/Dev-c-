#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char a[1000000], b[1000000];
    int i;
    scanf("%s", &a);
    int result=0, t, second=0;
    int length=0, start=0, finish;
    while(a[start]>='0' && a[start]<='9'){
    	b[start]=a[length];
    	length++;
    	start++;
	}
	finish=start;
	for(i=0; i<length; i++){
		result=result+pow(10, i)*(b[start-1]-48);
		start--;
	}
	start=finish+2;
	length=0;
    while(a[start-1]!='=')
    {
    	while(a[start]>='0' && a[start]<='9'){
    	    b[length]=a[start];
    	    length++;
    	    start++;
	    }
	    finish=start;
	    for(i=0; i<start; i++){
		    second=second+pow(10, i)*(b[length-1]-48);
	        start--;
	    }
        if(a[start-1]=='+'){
            result+=second;
        }
        else if(a[start-1]=='-'){
            result-=second;
        }
        else if(a[start-1]=='*'){
            result*=second;
        }
        else if(a[start-1]=='/'){
            result/=second;
        }
        start=finish+2;
	    length=0;
        second=0;
    }
    printf("%d", result);
}
