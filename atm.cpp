#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w; 
	float bal;
	cin >> w;
	cin >>bal;
if(w%5==0 && w<=bal-0.5)
	{
		cout <<((bal-w)-(0.5));
	}
	
	else
	{
		cout << bal;

	}
	return 0;
}