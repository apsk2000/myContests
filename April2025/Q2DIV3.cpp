#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int pos = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]>'0')
            pos = i;
        }
        int count=0;
        for(int i=0;i<s.length();i++){
            if(i<pos && s[i]>'0')
            count++;
            else if(i>pos)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}