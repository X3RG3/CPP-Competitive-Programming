#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int mx,mn;
        mx = max({a,b,c});
        mn = min({a,b,c});

        cout<<a+b+c - mx-mn<<endl;
        

    }
    return 0;
}