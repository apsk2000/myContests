#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string rev ="";
        string z ="";
        bool ans=true;
        for(int i=0;i<n;i++)
        {   
            rev = s[i]+rev;
            z = s[i]+z;
        }
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1])
            continue;
            else 
            ans=false;
        }
        if(ans==true){
            cout<<"NO"<<endl;
            continue;
        }
        if(n==1){ 
            cout<<"NO"<<endl; 
            continue;
        }
        if(k==0 && s==rev){ 
            cout<<"NO"<<endl; 
            continue;
        }       
        if(k==0 && s[0]>rev[0]){ 
            cout<<"NO"<<endl; 
            continue;
        }
        if(k>0 && s==rev){ 
            cout<<"YES"<<endl; 
            continue;
        }
        if(k==0 && s[0]<rev[0]){ 
            cout<<"YES"<<endl; 
            continue;
        }
        if(n==2 && k>0 && s[0]==s[1])
        {  cout<<"NO"<<endl; continue; }
       
        if(n>2 ){
            int count=0;
            bool small=false;
            for(int i=0;i<s.length();i++){
                if(s[i]<s[n-1]){
                    small=true;
                    break;
                }
            }
            for(int i=0;i<s.length()/2;i++){
                if(s[i]>rev[i])
                count++;
            }
            if(count<=k || small==true){
                cout<<"YES"<<endl; continue;
            }
            else{ cout<<"NO"<<endl; continue; }
        }
    }
    
    return 0;
}