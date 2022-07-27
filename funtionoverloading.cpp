#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int mk(int a,int b)
{
    int c=a+b;
    return c;

}
float mk(float a,float b,float c)
{
    float z=a+b+c;
    return z;
}

int main(){
    int a,b;
    float c;
    cin>>a>>b>>c;
    cout<<mk(a,b);
    cout<<mk(a,b,c);



return 0;
}