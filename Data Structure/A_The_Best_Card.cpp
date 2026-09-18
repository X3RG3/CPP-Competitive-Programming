#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        bool bwin = true;
        for(int i=2;i<=n+1;i++){
            if(bwin )
            for(int j= 2;j<=n+1;j++){
                if(j % i == 0){
                    bwin == false;
                    break; 
                }
            }
        }
    }
    return 0;
}