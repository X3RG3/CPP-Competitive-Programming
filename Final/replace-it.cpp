#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s,x;
        cin>>s>>x;
        string ans;
        for(int i=0;i <s.size();){
            bool found = true;
            if(i+x.size() <= s.size()){
                for(int j=0;j<x.size();j++){
                    if(s[i+j] != x[j]){
                        found = false;
                        break;
                    }
                }
            }
            else{
                found = false;
            }
            if(found){
                ans+='#';
                i += x.size();
            }
            else{
                ans+= s[i];
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}