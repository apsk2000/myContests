#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        int maxi = INT_MIN;
        int maxieven = INT_MIN;
        int mineven = INT_MAX;
        int minodd = INT_MAX;
        int oddcount = 0;
        int evencount = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%2==1)
            oddcount++;
            if(arr[i]%2==0)
            evencount++;
            if(arr[i]>maxi && arr[i]%2==1){
                maxi = arr[i];
            }
            if(arr[i]>maxi && arr[i]%2==0){
                maxieven = arr[i];
            }
            if(arr[i]<minodd && arr[i]%2==1){
                minodd = arr[i];
            }
            if(arr[i]<mineven && arr[i]%2==0){
                mineven = arr[i];
            }
        }
        if(oddcount==n){
            cout<<maxi<<endl;
            continue;
        }
        if(evencount ==n){
            cout<<maxieven<<endl;
            continue;
        }
        if(sum%2 ==1 && oddcount==evencount)
        cout<<sum-mineven<<endl;
        else
        cout<<sum<<endl;
    }
    return 0;
}