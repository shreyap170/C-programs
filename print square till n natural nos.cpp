#include<iostream>
using namespace std;

int main()
{
	int n,count;
	cout<<"enter num: ";
	cin>>n;
	
	for(count=1 ;count<=n ;count=count+1)
	{
		cout<<count<<" Square is: "<<count*count<<endl;
	}
	
};