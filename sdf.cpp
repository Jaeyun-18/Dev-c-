#include <iostream>
using namespace std;

int main()
{
	int a, ch=0;
	
	for(int i=0; i<3; i++)
	{
		cin>>a;
		if(a<=170)
		{
			cout<<"CRASH";
			ch=1;
			break;
		}
	}
	
	if(ch!=1)
		cout<<"PASS";
		
	return 0; 
}
