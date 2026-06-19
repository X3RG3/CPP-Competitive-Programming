#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<endl;
    // }

    //no need for index, will use it as shortcut, when no need to work with index
    for(char c : s){
        cout<<c<<endl;
    }
    return 0;
}