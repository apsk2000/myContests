#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ans = false;
        for(int i=n+1;i<=n+50;i++){
            int z = n^i;
            if(z<n && z+n>i ){
                ans =true;
                cout<<z<<endl;
                break;
            }
        }
        if(ans==false)
        cout<<-1<<endl;
    }
    return 0;
}