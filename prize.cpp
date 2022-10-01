	#include<iostream>
	using namespace std;
	int main()
	{
		int a;
		cin>>a;
		while(a--)
		{
			int  b,c;
			cin>>b>>c;
			b=b*10;
			c=c*90;
			int sum = b+c;
			cout<<sum<<"\n";
		}
		return 0;
	}