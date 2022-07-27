#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int c;
	cin>>c;
	while(c--)
	{
	    int a,b,d;
	    cin>>a>>b>>d;
	    
	    if(a>b&&a>c){
	   
	        cout<<a<<endl;
	    }
	    
	    else {
	    if(b>a&&b>c)
	   {
	        cout<<b<<endl;
	   }
	    else {
	    
	        cout<<"Charlie"<<endl;
	    }
	    }
	    
	    
	}
	return 0;
}
