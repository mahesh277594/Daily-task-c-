#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the the size of array";
cin>>n;
int* arr=new int[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
 for (int i=0; i <n; i++)
    {
        //ending point
        for (int j=i; j<n; j++)
        {
            //Printing elements between the start and end points
            cout<<"[";
            for (int k=i; k<=j; k++)
            {
                    cout<<arr[k]<<",";
                }
            cout<<"]"<<endl;
        }
    }

return 0;
}