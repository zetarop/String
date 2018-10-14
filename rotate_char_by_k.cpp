#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	string s;
	cin>>k>>s;
	k %= 26;

	for(auto &a:s)
	{
		int t= 'z' - a;
		if(k >= t)
		{
			a = 'a' + (k-t-1);
 		}
 		else
 			a= a+k;
	}
	cout<<s<<endl;
	return 0;
}
