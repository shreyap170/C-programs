#include<iostream>
using namespace std;

int main()
{
	int i,j,count;
	
	count=1;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++){
			cout<<count<<" ";
			count=count+1;
		}
		cout<<endl;
	}
}