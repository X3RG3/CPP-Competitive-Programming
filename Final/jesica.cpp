#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    string a = "Jessica";
    stringstream ss(s);
    string w;
    bool found = false;
    while(ss>>w){
        if(w == a){
            cout<<"YES"<<endl;
            found = true;
            break;
        }
        
    }
    if(!found){
        cout<<"NO"<<endl;
    }
    return 0;
}