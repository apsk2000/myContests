#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int num,n,m;
       cin>>num>>n>>m;
       int count=0;
       while(n>0 || m>0) {
        if(num%2==0 && num>0 || n>0){
            num/=2;
            n--;
            count++;
        }
        else if(num%2==1 && num>0 || m>0){
            num/=2;
            num+=1;
            m--;
            count++;
        }
        else
        break;
       }
       cout<<count<<endl;
    }
    return 0;
}