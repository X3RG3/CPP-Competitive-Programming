#include <bits/stdc++.h>
using namespace std;
void print(int n,char c){
    for(int i=0;i<n;i++){
        cout<<c<<" ";
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        cin.ignore();
        print(n,c);
        cout<<endl;
    }
    return 0;
}