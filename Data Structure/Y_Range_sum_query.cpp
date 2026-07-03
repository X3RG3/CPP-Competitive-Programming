#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    long long int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    long long int pre[n];
    pre[1] = a[1];
    for(int i=2;i<=n;i++){
        pre[i] = pre[i-1]+a[i];
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        if(l==1){
            cout<<pre[r]<<endl;
        }
        else{
            cout<<pre[r] - pre[l-1]<<endl;
        }
        
        
    }
    return 0;
}