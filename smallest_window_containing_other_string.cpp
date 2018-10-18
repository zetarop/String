#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;



bool fun(map<char, int> T, string s, int L, int R, map<char, int> M)
{
	for(auto a:T)
	{
		if(T[a.first] > M[a.first])
			return 0;
	}
	return 1;
}

void solve()
{
	string s,t;
	cin>>s>>t;

	int len1 = s.size();
	int len2 = t.size();
	if(len2 > len1)
	{
		cout<<-1<<endl;
		return;
	}

	map<char, int> T;
	for(auto a:t)
		T[a]++;

	map<char,int> M;

	int ansL=0,ansR=len1-1;
	int L=0;
	int R=0;
	M[s[0]]++;
	while(R < len1)
	{
		if(fun(T,s,L,R,M) && L < R)
		{
			if(R-L < ansR- ansL)
			{
				ansR = R;
				ansL = L;
			}
			M[s[L]]--;
			L++;
		}
		else
		{
			R++;
			M[s[R]]++;
		}
	}
	for(int i=ansL;i<=ansR;i++)
		cout<<s[i];
	cout<<endl;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
}
