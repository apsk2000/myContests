#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int len;
        cin>>len;
        int sum = 0;
        for(int i=0;i<len;i++){
            int a;
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        if(len ==1)
        {cout<<v[0]<<endl;continue;}
        sort(v.begin(),v.end());
        if(len==3 && v[0]+v[1]<v[2]){
            cout<<v[0]+v[1]+v[2]<<endl;
            continue;
        }
        int ans = 0;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]!=v[i-1]){
                ans = v[i-1];
                break;
            }
        }
        cout<<sum-ans<<endl;
    }
    return 0;
}