#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main(){
    int num1,num2;
    cout<<"enter the num";
    cin>>num1;
    cout<<"nter the second ";
    cin>>num2;
    cout<<sum(num1,num2);


return 0;
}