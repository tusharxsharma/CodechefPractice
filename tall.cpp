#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int b,c;
		cin>>b>>c;
		if(b>c)
		{
			cout<<"A"<<"\n";
		}
		else
			cout<<"B"<<"\n";
	}
	return 0;
}