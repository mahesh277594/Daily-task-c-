#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int s,i;
cin>>s;
int* arr=new int[s];
for(i=0;i<s;i++)
{
    cin>>arr[i];
}
for(i=0;i<s;i++)
{


if(arr[i]>=0)
{
    cout<<"postive num is="<<arr[i]<<" "<<endl;
}
else 
{
    cout<<"negative num is="<<arr[i]<<endl;
}
}
return 0;
}