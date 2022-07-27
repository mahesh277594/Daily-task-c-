#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int s,x=0,sum=0,y;
    cin>>s;
    int* arr=new int[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<s-1;i++)
    {
         x=arr[0]+arr[i+1];
        arr[0]=x;
        sum=x+arr[i+1];
        
    }
    cout<<sum<<endl;

return 0;
}