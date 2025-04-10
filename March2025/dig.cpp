#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y,a;
        cin>>x>>y>>a;
        int sum=0;
        int i=0;
        int z = a%(x+y);
        if(z==0 || z<x)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;        
    }
       
    return 0;
}