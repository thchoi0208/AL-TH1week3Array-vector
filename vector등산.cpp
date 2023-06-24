#include <iostream>
#include<vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
int n,h[10000];
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>h[i];
} 
	int mh=0,id=0;
	for(int i=1;i<n;i++)
	{
		if(mh<h[i]-h[i-1])
		{
			mh=h[i]-h[i-1];
		}
	}
	if(mh>0)
	{
		cout<<id<<id+1;
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
