#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int s,i,j;
cout<<"enter the size of array";
cin>>s;
int* arr=new int[s];
cout<<"enter the element of array";
for(i=0;i<s;i++){
    cin>>arr[i];
}
for(i=1;i<s;i++)
{
    int curr=arr[i];
    j=i-1;
    while(arr[j]>curr && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=curr;
}
cout<<"sorted element are\n";
for(i=0;i<s;i++)
{
    cout<<arr[i]<<" "<<endl;
}

return 0;
}