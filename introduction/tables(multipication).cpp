#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"enter number ";
	cin>>n;
	for(i=n; i<=n*10; i=i+n)
	{
		cout<<i<<endl;
	}
}