#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    int c[n];
    b[0] = a[0];
    c[n-1] = a[n-1];
    for(int i=1;i<n;i++){
        b[i] = b[i-1] + a[i];
    } 

    for(int i=n-2;i>=0;i--){
        c[i] = c[i+1] + a[i];
    }
    reverse(c,c+n);
    
    for(int i=0;i<n;i++){
        if(b[i] == c[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}