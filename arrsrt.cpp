#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int s,i,temp;
cout<<"enter the size of array";
cin>>s;
int* arr=new int[s];
cout<<"enter teh element of array";
for(i=0;i<s;i++)
{
    cin>>arr[i];

}

    for(i=0;i<s-1;i++)
    {
        for(int j=0;j<(s-i-1);j++)
        {

        
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        }
       
    }

    
    

for(i=0;i<s;i++)
    {
        cout<<"sorted array is ";
        cout<<arr[i]<<endl;
    }
    
return 0;
}