#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int s;
cout<<"enter the size of array";
cin>>s;
int* arr=new int[s];
cout<<"enter the element of array";
for(int i=0;i<s;i++)
{
    cin>>arr[i];
}
cout<<"enelemnt of array is=";
for(int i=0;i<s;i++)
{
    cout<<" "<<arr[i]<<endl;
}
 for(int i=s-1;i>0;i--)
 {
arr[0]=arr[i-1];
    cout<<arr[i];
 }
 
arr[0]=arr[s-1];
return 0;
}