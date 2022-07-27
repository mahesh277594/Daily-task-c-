#include <iostream>
using namespace std;
class mahesh
{
    int a, b, c;

public:
    mahesh(int x, int y, int z)
    {
        x = a;
        y = b;
        z = c;
    }
    void sum(void)
    {
        cout << "enter three num";
        cin >> a >> b >> c;
    }
    void printnum(void)
    {
        int m = c + b + a;
        cout << m;
    }
};
mahesh::mahesh(int,int,int){

}

int main()
{
    mahesh mk( 8,9,0);
    mk.printnum();

    return 0;
}