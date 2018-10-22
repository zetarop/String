#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;

bool palindrom(string s)
{
	int l=0;
	int h=s.size()-1;
	while(l < h)
	{
		if(s[l] != s[h])
			return 0;
		l++;
		h--;
	}
	return 1;
}

int main()
{
	string s;
	cin>>s;
	cout<<palindrom(s)<<endl;
	return 0;
}
