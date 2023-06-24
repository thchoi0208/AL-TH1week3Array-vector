#include <iostream>
#include<vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	vector<int>v;
	for(int i=0;i<11;i++)
	{
		v.push_back(i);
	}
	for(int j=11;j>0;j--)
	{
		cout<<v[j];
		cout<<"	";
	}
	
	
	
	return 0;
}
