#include<iostream>
using namespace std;
 typedef struct empoly
{
    int id;
    float sasl;
    char mkll;
    /* data */
}ep;

int main(){
    ep mahesh;
    mahesh.id=12;
    mahesh.sasl=34.4;
    mahesh.mkll='s';
    cout<<mahesh.id<<endl;
    cout<<mahesh.sasl<<endl;
    cout<<mahesh.mkll<<endl;


return 0;
}