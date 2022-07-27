#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int n,i,s1=0,s2=1,s3;
cin>>n;
cout<<"the fibonacci series are=";
for(i=1;i<=n;i++)
{
   cout<<" "<<s1;
    s3=s1+s2;
    s1=s2;
    s2=s3;
}

return 0;
}