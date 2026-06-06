#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mn = a[0];

    for(int i=0;i<n;i++){
        mn = min(mn , a[i]);
    }
    int freq = 0;
    for(int i=0;i<n;i++){
        if(a[i] == mn){
            freq++;
        }
    }
    if(freq %2 == 0){
        cout<<"Unlucky";
    }
    else{
        cout<< "Lucky";
    }
    return 0;
}