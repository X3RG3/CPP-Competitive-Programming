#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cin.ignore();
        string a,b;
        cin>>a>>b;
        for(int i=0,j=0;i<n && j<m;i++,j++){
            if(a[i] == b[j]){
                cout<<a[i];
            }
            else{
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}