#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    string x,y;
	    cin>>x>>y;
	    int b=1;
	    for(int j=0;j<x.length();j++){
	        if(x[j]!=y[j]){
	            if(x[j]=='?' || y[j]=='?') continue;
	            else {
	                b=0;
	            }
	        }
	    }
	    if(b) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
