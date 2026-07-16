#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int terg = 0;
        for(int i=0;i<n;i++){
            if(a[i]% x == 0){
                if (a[i] > terg){
                    terg = a[i];
                }
            }
        }
        cout<<terg<<endl;
    }
    return 0;
}