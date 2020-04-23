#include <iostream>
using namespace std;

int main()
{
	int a,i,ans;
	ans=0;
	cin>>a;
	
	for(i=1; i<=a; i++)
	{
		if(i<10)
		{
			if(i==1)
				ans++;
		}
		
		else if(i<=10 && i<100)
		{
			if(int(i/10)==1)
				ans++;
			if(i%10==1)
				ans++;
		}
		
		else if(i<=100 && i<1000)
		{
			if(i%10 == 1)
				ans++;
						
			if(i/10%10 == 1)
				ans++;
				
			if(i/100 == 1)
				ans++;	
		}
	}
	
	cout<<ans;
	return 0;
}
