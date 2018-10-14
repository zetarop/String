#include<bits/stdc++.h>
using namespace std;

string reverse(string s)
{
	string r="";
	for(auto a:s)
		r = a+r;
	return r;
}

int main()
{
	string s;
	cin>>s;
	cout<<reverse(s)<<endl;
	return 0;
}
