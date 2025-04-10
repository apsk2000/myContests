#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        priority_queue<int, vector<int>, greater<int>> myqueue; 

        for (int i = 0; i < len; i++) {
            int a;
            cin >> a;
            myqueue.push(a);
        }
        if (len == 1) {
            cout << myqueue.top() << endl;
            continue;
        }
    
        while (myqueue.size() > 1) {
            int first = myqueue.top(); 
            myqueue.pop();
            int second = myqueue.top(); 
            myqueue.pop();
            int sum = first + second - 1;
            myqueue.push(sum);
        }
    
        cout << myqueue.top() << endl;  
    }
    return 0;
}