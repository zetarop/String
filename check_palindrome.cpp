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
	if(s == reverse(s))
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
