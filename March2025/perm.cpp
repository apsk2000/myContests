#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=2){
            for(int i=n;i>0;i--)
            cout<<i<<" ";
        cout<<endl;
           continue;
        }
        else{
            cout<<"2 1 ";
            for(int i=3;i<=n;i++)
            cout<<i<<" ";
            cout<<endl;
            continue;
        }
    }
    return 0;
}