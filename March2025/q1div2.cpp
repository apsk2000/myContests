#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int p = k-1;
        int count = 0;
        if(n%2==1 && k%2==1){
            n=n-k;
            count++;
            if(n%p==0)
            count=count+ n/p;
            else 
            count = count+n/p +1;
        }
        else if(n%2==0 && k%2==0)
        count = n/k + 1;
        else if(n%2==1 && k%2==0){
            n=n-k-1;
            count++;
            count = count+n/k+1;
        }
        else if(n%2==0 && k%2==1){
            int z=n-(k-1);
            count++;
            if(z%p==0)
            count=count+ z/p;
            else 
            count = count+z/p +1;
        }
        cout<<count<<endl;
        
    }
    return 0;
}