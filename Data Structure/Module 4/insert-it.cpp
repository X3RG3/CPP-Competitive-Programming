#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    cin>>m;
    vector<int> v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int x;
    cin>>x;
  
    v1.resize(n+m);
    

    for(int i=n-1;i>=x;i--){
        v1[i+m] = v1[i];
    }

    for(int i=0;i<m;i++){
        v1[i+x] = v2[i];
    }


    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    return 0;
}