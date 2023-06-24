#include <iostream>
#include<vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int n,a[100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ms=0,ns=100,s=0;
	for(int i=0;i<n;i++)
	{
		if(ms<a[i])
		{
			ms=a[i];
		}
	
	if(ns>a[i])
	{
		ns>a[i];
	}
	s+=a[i];
}
cout<<(s-ns-ms)/(n-2);
	
	
	return 0;
}
