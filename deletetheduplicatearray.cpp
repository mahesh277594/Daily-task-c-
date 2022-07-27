#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int s,i,j,k;
cout<<"enter the size of array";
cin>>s;
int* arr=new int[s];
cout<<"enter the element of array";
for(i=0;i<s;i++)
{
cin>>arr[i];
}
for(i=0;i<s;i++)
{
    for(j=i+1;j<s;)
    {
        if(arr[j]==arr[i])
        {
for(k=j;k<s;k++){
    arr[k]=arr[k+1];

}
s--;

        }
        else
            j++;
    }  
    }
    for(i=0;i<s;i++)
    {
        cout<<"new elemnt of array is="<<" "<<arr[i]<<endl;
    }

return 0;
}