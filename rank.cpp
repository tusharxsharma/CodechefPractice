#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int b;
		cin>>b;
		if(b%25==0)
		{
			cout<<((b/25))<<"\n";	
		}
		else
		cout<<((b/25)+1)<<"\n";
	}
	return 0;
}