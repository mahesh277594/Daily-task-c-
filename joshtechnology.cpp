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
for(int i=0;i<s;i++){
    if(arr[i]>0)
    {
        int x=arr[i]*arr[i];
        cout<<x<<endl;
    }
    else if(arr[i]<0){
        int y=abs(arr[i]);
        int z=y*y;
        cout<<z<<endl;
    }
    
}
return 0;
}