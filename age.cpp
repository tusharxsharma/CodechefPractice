#include<iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int b,c,d;
		cin>>b>>c>>d;
		if((d>=b)&&(d<c))
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
