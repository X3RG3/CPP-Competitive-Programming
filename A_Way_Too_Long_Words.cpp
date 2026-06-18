#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.size()>10){
            cout<<s.front()<<s.size() -2<<s.back()<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}