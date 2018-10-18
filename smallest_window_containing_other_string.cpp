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

	int cnt=0;
	int start=0;
	int start_index=-1;
	int min_len = INT_MAX;

	for(int i=0;i<len1;i++)
	{
		M[s[i]]++;

		if(T[s[i]] !=0 && M[s[i]] <= T[s[i]])
			cnt++;

		if(cnt == len2)
		{
			while(M[s[start]] > T[s[start]] || T[s[start]] == 0)
			{
				if(M[s[start]] > T[s[start]])
					M[s[start]]--;
				start++;
			}
			int len_window = i-start+1;
			if(min_len > len_window)
			{
				min_len = len_window;
				start_index = start;
			}
		}
		
	}
	if(start_index == -1)
	{
		cout<<-1<<endl;
		return;
	}
	cout<<s.substr(start_index,min_len)<<endl;
	return;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
}
