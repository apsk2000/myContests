#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int arr[n];
        long long int maxi = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
        }
        int x = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==maxi && i>0){
                x = arr[i-1];
                break;
            }
        }
        if(k==1){
            cout<<maxi+x<<endl;
            continue;
        }
        sort(arr,arr+n);
        long long int sum=0;
        int count=0;
        n=n-1;
        while(n>=0){
            count++;
            sum+=arr[n];
            if(count==(k+1))
            break;
            n--;
        }
        cout<<sum<<endl;
    }
    return 0;
}