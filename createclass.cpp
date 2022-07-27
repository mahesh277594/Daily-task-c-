#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class add{
    int* arr;
    int i;
    int z;
    public:
    add(int n){
        arr=new int[n];


    }

        void addfun(int* arr,int x){
            int sum=0;
            for(i=0;i<x;i++)
            {
              sum=sum+arr[i];
            }
            int z=sum/x;
            cout<<z;
        
            

        }
        void check()
        {
            int count=0;
            int count1=0;
            if(arr[i]>z){
                count++;
                 cout<<count;
            }
            else{
                count1++;
                cout<<count1;
            }
           
        }

    
};
int main(){
    add n;




return 0;
}