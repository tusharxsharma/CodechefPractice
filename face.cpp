#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int b,c,d;
		cin>>b>>c;
		d=b-c;
		if(d>=c)
		{
			cout<<c<<"\n";
		}
		else if(c>d)
		{
			cout<<d<<"\n";
		}
		else 
		{
			cout<<"0"<<"\n";
		}
	}
	return 0 ;
}