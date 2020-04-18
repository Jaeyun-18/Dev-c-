#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int n, s[40]={0, }, a[40], b[40], t=0;
	cin>>n;
	
	for(int i=0; i<n; i++) cin>>s[i];
	sort(s, s+n, [](int &a, int &b)->bool{return a>b;});  //내림차순 정렬
	for(int i=0; i<n; i++) a[i]=s[i]; //내림차순 정렬 a배열에 대입 
	 
	for(int i=0; i<n; i++) cin>>s[i];
	sort(s, s+n, [](int &a, int &b)->bool{return a>b;});  //내림차순 정렬
	for(int i=0; i<n; i++) b[i]=s[i]; //내림차순 정렬 a배열에 대입 
	
	for(int i=0; i<n; i++) t+=a[i] * b[n-i-1];		
	
	cout<<t;
	 
	return 0;	
}
