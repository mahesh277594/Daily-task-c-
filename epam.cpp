    #include<bits/stdc++.h>
    #include<iostream>
    using namespace std;

    int main(){
    int s,i;
    cin>>s;
    int* arr=new int[s];
    for(i=0;i<s;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<s;i++)
    {
        if(arr[i]<=100)
        {
            cout<<"1"<<endl;
        }
        else if(arr[i]>100)
        {
            cout<<"1"<<endl;
        }
        else if(arr[i]>80)
        {
            cout<<"1"<<endl;
        }
        else if(arr[i]<60)
        {
            cout<<"2"<<endl;
        }
        else if(arr[i]>70)
        {
            cout<<"1"<<endl;
        }
        else if(arr[i]>80&& arr[i]>60 && arr[i]>70 && arr[i]>60)
        {
            cout<<"5"<<endl;
        }
        else if(arr[i]<85)
        {
            cout<<"1"<<endl;
        }
    }
    return 0;
    }