#include<iostream>
using namespace std;
class mk
{
    private:
    int a,b;
    public:
    int c,d,e;
    void setdata(int a,int b);
    void getdata(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }
};
void mk ::setdata(int a1,int b1){
    a=a1;
    b=b1;
}
int main() 
{
    mk mahesh;
    mahesh.c=12;
    mahesh.d=21;
    mahesh.e=54;
    mahesh.setdata(2,3);
    mahesh.getdata();
    return 0;
}