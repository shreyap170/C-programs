#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter number:";
	cin>>num;
	
	if(num>0)
	{
		cout<<"positive";
	}
	else if(num==0)
	{
		cout<<"zero";
	}
	else
	{
		cout<<"negative";
	}
};