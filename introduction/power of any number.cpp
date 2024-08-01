#include<iostream>
using namespace std;

int main()
{
	int n,i,pow,num;
	cout<<"enter the number: "<<endl;
	cin>>n;
	cout<<"enter the power: "<<endl;
	cin>>pow;
	
	num=n;
	for(i=1; i<pow; i++)
	{
		num=num*n;
	}
	cout<<num;
}