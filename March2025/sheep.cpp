#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>maxi){
                maxi = arr[i];
            }
            if(arr[i]<mini){
                mini = arr[i];
            }
        }
        cout<<maxi-mini<<endl;        
    }  
      return 0;
}