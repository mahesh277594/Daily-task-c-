#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
    cout<<"enter how many test case u want to run";
	cin>>t;
	while(t--)
	{
	    int n;
        cout<<"enter the recipe you want to orderd";
	    cin>>n;
	    int count=0;
	    for(int i=11;i>=0;i--)
	    {
	        int a=pow(2,i);
	        while(n>=a){
	            n -=a;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
