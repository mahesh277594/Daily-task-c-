#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int prev=a[0],sum=a[0];
    for(int i=0;i<n;i++)
    {
        prev=max(prev+a[i],a[i]);
        sum=max(sum,prev);
    }
    cout<<sum<<endl;
    return 0;
}