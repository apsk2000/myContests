#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int one  = 0;
        int zero = 0;
        int five =0;
        int three = 0;
        int two = 0;
        int count = 0;
        bool ans = false;
        for(int i=0;i<n;i++){
            count++;
            if(arr[i]==0)
            zero++;
            if(arr[i]==1)
            one++;
            if(arr[i]==2)
            two++;
            if(arr[i]==3)
            three++;
            if(arr[i]==5)
            five++;

            if(zero>=3 && one>=1 && two>=2 && three>=1 && five>=1){
            cout<<count<<endl;
            ans = true;
            break;
            }
        }
        if(ans==false)
        cout<<"0"<<endl;
    }
    return 0;
}