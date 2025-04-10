#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        bool result = true;
        for(int i=0;i<4;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=1;i<4;i++){
        if(v[i-1]==v[i]){
            continue;
        }
        else
       { 
        result = false;
        break;
       } 
    }
    if(result==true)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    
     }   
    return 0;
}