#include <iostream>
#include<vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
int n,s[10000],r[10000];
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>s[i];
} 
for(int i=0;i<n;i++)
{
	r[i]=1;
	for(int j=0;j<n;j++)
	{
		if(s[i]<s[j])
		{
			r[i]++;
		}
	}
}
for(int i=0;i<n;i++)
{
	cout<<r[i];
}
	return 0;
}
