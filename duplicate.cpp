#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int s,i,j;
cout<<"ente the size of arry";
cin>>s;
int* arr=new int[s];
cout<<"enter the element of array";
for(i=0;i<s;i++)
{
    cin>>arr[i];

}
cout<<"element of array";
for(i=0;i<s;i++)
{
    cout<<arr[i]<<endl;

}
for(i=0;i<s;i++){
    for(j=i+1;j<s;j++){
        if(arr[i]==arr[j])
        {
            cout<<"duplicate element are"<<" "<<arr[i]<<endl;
        }

    }
}


return 0;
}