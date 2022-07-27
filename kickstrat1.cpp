#include<iostream>
#include<string>
using namespace std;
int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='a'||'i'||'e'||'o'||'u'||'A'||'E'||'I'||'O'||'U'){
            cout<<str+ "is ruled by Bob."<<endl;
            break;
            }
            
            else if(str[i]=='y'||'Y'){
            cout<<str+ "is ruled by nobody."<<endl;
            break;
            }
            else{
                cout<<str+ "is ruled by Alice."<<endl;
                break;
            }
            
        }
        
    }
    return 0;
}