#include<bits/stdc++.h>
using namespace std;
bool primecheck(int n){
    if(n<=1)
    return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1 && k==2){
            cout<<"YES"<<endl;
            continue;
        }
        bool prime = primecheck(n);
        if(prime == false)
        cout<<"NO"<<endl;
        else{
            if(k==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}