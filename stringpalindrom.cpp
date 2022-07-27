#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int i;
string str,s;
char a;
getline(cin,str);
for(i=str.size()-1;i>=0;i--)
{
   s.push_back(str[i]);
     
}
if(str==s)
{
    cout<<"string is palindrome";
}
else{
    cout<<"not pailendrome";
}

return 0;
}