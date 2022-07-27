#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int v;
    cin >> v;
    int h;
    cin >> h;
    int hh;
    cin >> hh;
    int sum=hh*h;
    int arr[v]={0};
    for (int i = 0; i < v; i++)
    {
        cin>>arr[i];
    }
    int count=0,s=0;
    for (int i = 0; i < v; i++)
    {
        if (sum > arr[i])
        {
            count=1+i-v;
        }
        
            
        
        
    }
    cout<<count;
    return 0;
}