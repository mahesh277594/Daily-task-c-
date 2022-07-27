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
for(int i=0;i<s;i++)
{
    cout<<"array is ="<<arr[i]<<endl;
}
cout<<"enter the element you want to find";
int element;
cin>>element;
for(int i=0;i<s;i++)
{
    if(arr[i]==element)
    {
        cout<<i;
    }
    else
    {
        cout<<"not persent in array";
    }
}


return 0;
}