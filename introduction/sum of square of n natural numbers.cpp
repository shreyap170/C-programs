#include<iostream>
using namespace std;

int main()
{
	int n,i,sum;
	cout<<"enter the number: "<<endl;
	cin>>n;
	
	sum=0;
	for(i=1; i<=n; i++)
	{
		sum=sum+i*i;
	}
	cout<<sum;
}