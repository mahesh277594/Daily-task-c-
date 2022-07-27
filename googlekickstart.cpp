#include<iostream>
using namespace std;
int main(){
int c;
cin>>c;
while(c--)
{
    int s,x,sum=0;
    cin>>s>>x;
    int* arr=new int[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
        
    }
    for(int i=0;i<s;i++){
        sum=sum+arr[i];
    }
    int y=sum/x;
    int p=sum-(x*y);
    cout<<p<<endl;
}
return 0;
}