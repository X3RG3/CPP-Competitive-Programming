#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int mn = a[0];
    int mx = a[0];
   
    for(int i=0;i<n;i++){
        mn = min(a[i],mn);
        mx = max(a[i],mx);
    }
    int  mninx = 0;
    int mxinx = 0;
    for(int i=0;i<n;i++){
        if(a[i] == mn){
            mninx = i;
        }
        else if( a[i] == mx){
            mxinx = i;
        }
    }
    swap(a[mninx],a[mxinx]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}