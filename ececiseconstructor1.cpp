#include<iostream>
using namespace std;
class rectangle
{
    int l,br;
    public:
    rectangle(int a,int b)
    {
        a=l;
        b=br;
    }
    rectangle(int c)
    {
        c=l;
    }
    rectangle()
    {

    }
    void area(void)
    {
        int k=l*br;
        cout<<k;
    }
    void getdata(void)
    {
cout<<"enter two num ";
cin>>l>>br;
    }
};
int main(){
    rectangle c1;

    c1.getdata();
    c1.area();



    

return 0;
}