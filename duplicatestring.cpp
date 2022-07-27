#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
string s;
cout<<"enter a string";
getline(cin,s);
for(int i=0;i<s.size();i++)
{
    for(int j=i+1;j<s.length();j++)
    {
        if(s[i]==s[j])
        {
           cout<<s[i]<<endl;
        }
    }
     
}
return 0;
}