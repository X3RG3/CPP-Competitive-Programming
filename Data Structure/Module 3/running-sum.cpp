#include <bits/stdc++.h>
using namespace std;
void sum(vector<int> &v,vector<int> &v2, int n){
    for(int i=0;i<n;i++){
        if(i==0){
            v2[i] = v[i];
        }
        else{
            v2[i] = v2[i-1]+ v[i];
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> v2(n);
    sum(v,v2,n);

    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}