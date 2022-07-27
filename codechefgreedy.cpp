#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll l,b;
	cin>>l>>b;
	ll N;
	cin>>N;
	ll sum=0;
	for(int i=0;i<N;i++)
	{
	    ll L,B;
	    cin>>L>>B;
	    sum+=max((L/l)*(B/b),(L/b)*(B/l));
	}
	cout<<sum<<endl;
	return 0;
}
