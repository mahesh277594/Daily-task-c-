#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a*b;
}
int sum(int c,int d,int m)
{
    return c*d*m;

}
int voulume(int l,int b,int h)
{
    return l*b*h;
}
int voulume(int z)
{
    return 3.14*z*z;
}
int main(){
    cout<<"the multiplication of 3 and 6 is"<<sum(3,6)<<endl;
    cout<<"the multiplaction of thre num is"<<sum(2,3,4)<<endl;
    cout<<"the volume of cone"<<voulume(1,1,1)<<endl;
    cout<<"the radious of circle is "<<voulume(2)<<endl;


return 0;
}