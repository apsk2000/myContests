#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,s;
        cin>>n>>k>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>v;
        int j=0;
        int count = 0;
        while(count<k){
            v.push_back(arr[j]);
            j++;
            if(j<n)
            continue;
        else{
            j=0;
            count++;
        }
        }
        int sum=0;
        bool res = false;
        int ans = 0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(sum>=s){
                ans = v.size()-i;
                res = true;
                break;
            }
            else continue;
        }
        if(res==true)
        cout<<ans<<endl;
        else
        cout<<1<<endl;
    }
    return 0;
}