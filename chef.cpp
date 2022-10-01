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
			if(b>=c)
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