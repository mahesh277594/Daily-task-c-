#include <iostream>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b; 
	int c=0;
	  //Reading input from STDIN
	  for(int i=0;i<a.size();i++)
	  {
		  
			  if(a[i]==b[i]){
			  c++;
			  
			  }
			   
		  
		 
	  }
	   cout<<c<<endl;

	
	 return 0; 
	
}