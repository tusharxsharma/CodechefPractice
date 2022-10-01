#include<iostream>
using namespace std; 
int main()
{
	int a;
	cin >>a;
	while(a--)
	{
		int b,c;
		cin >>b>>c;
		if(b>c)
		{
			cout<<c<<"\n";
		}
		else if(c>b)
		{
			cout<<b<<"\n";
		}
		else
		{
			cout<<b<<"\n";
		}

	}
	return 0;
}