#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count = 0;
        int i=n-1;
        while(i>=0){
            if(arr[i]>=x)
            {count++;i--;}
            else
            break;
        }
        int k = 0;
        int mini = INT_MAX;
        for(int j=i;j>=0;j--){
            k++;
            mini = min(mini,arr[j]);
            if(mini*k>=x){
                count++;
                k=0;
                mini =INT_MAX;
            }            
        }
        cout<<count<<endl;
    }
    return 0;
}