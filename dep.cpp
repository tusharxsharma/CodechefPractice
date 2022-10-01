#include<iostream>
using namespace std;
int main()
{
	int a;
	int c= 7;
	cin>>a;
	while(a--)
	{
		
		int b;
		cin>>b;
		if(b<c)
		{
			cout<<"YES"<<"\n";
		}	
		else
		{
			cout<<"NO"<<"\n";
		}
		
	}
	return 0;
}