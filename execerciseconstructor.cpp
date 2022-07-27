#include<iostream>
using namespace std;
class student
{
    string name;
    public:
    student(string s)
    {
        name=s;

    }
    student()
    {
        name="unknown";

    }
    void print(void)
    {
        cout<<name<<endl;
    }
    void getdata()
    {
        cout<<"enter a string";
        cin>>name;
    }
    
};
int main(){
student sc;
student p;
sc.getdata();
sc.print();
p.print();
return 0;
}
