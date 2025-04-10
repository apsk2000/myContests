#include<bits/stdc++.h>
using namespace std;

int countprime(int n) {
    if(n<2) 
    return 0;
    vector<bool> Prime(n + 1, true);
    Prime[0] = false;
    Prime[1] = false;
    for(int i = 2; i*i<=n; i++) {
        if (Prime[i]) {
            for (int j=i*i; j<=n;j+=i) {
                Prime[j] = false;
            }
        }
    }
    int count = 0;
    for (int i=2;i<=n;i++) {
        if(Prime[i])
        count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = countprime(n);
        cout<<"This is x : "<<x<<endl;
        int sum = x;
        sum+=(x-1)*(x-2);
        cout<<sum<<endl;
        }
    return 0;
}