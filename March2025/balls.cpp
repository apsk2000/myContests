#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        bool ans = true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0)
                continue;
                if(arr[i][j]==1){
                    if(i==0 || j==0 ||  (arr[i-1][j]==1 && i>0) || (arr[i][j-1]==1 && j>0)){
                        continue;
                    }
                    else{
                       ans = false;
                       break;                         
                    }
                }
            }
            if(ans==false)
            break;
        }
        if(ans==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}