#include<iostream>
using namespace std;

int main()
{
	int n,i,fac;
	cout<<"enter the number: "<<endl;
	cin>>n;
	
	fac=1;
	for(i=1; i<=n; i++)
	{
		fac=fac*i;
	}
	cout<<fac;
}