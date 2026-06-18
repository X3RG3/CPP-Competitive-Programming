#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool found = false;
        int sum = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[i] + a[j] + a[k] == s){
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
            if(found) break;
        }
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}