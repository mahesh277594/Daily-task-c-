#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int s,ele,pos;
cout<<"enter the size of array";
cin>>s;
int* arr=new int[s];
cout<<"enter the element of array";
for(int i=0;i<s;i++)
{
    cin>>arr[i];
}
cout<<"enter the new element of array";
cin>>ele;
cout<<"enter the position of array";
cin>>pos;
for(int i=s;i>=pos;i--)
{
    arr[i]=arr[i-1];
    arr[i]=ele;
    s++;
}
cout<<"\n new array is \n";
for(int i=0;i<s;i++)
{
    cout<<arr[i]<<" ";
    cout<<endl;
}
return 0;
}