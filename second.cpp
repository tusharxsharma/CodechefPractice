#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if((a>b)&&(b>c)&&(a>c))
		{
			cout<<a<<"\n";
		}
		else if((b>a)&&(a>c)&&(b>c))
		{
			cout<<b<<"\n";
		}
		else if((c>b)&&(c>a)&&(b>a))
		{
			cout<<c<<"\n";
		}
	}
	return 0;
}