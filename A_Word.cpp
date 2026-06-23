#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int cS,cC;
    cS=cC = 0;

    for(char c : s){
        if(c >= 'A' && c<= 'Z'){
            cC++;
        }
        else if( c>= 'a' && c<= 'z'){
            cS++;
        }
    }
    string ans;
    if(cC > cS){
        for(char c: s){
            if(c >= 'a' && c<='z'){
                ans+=c-32;
            }
            else{
                ans+=c;
            }
        }
    }
    else if(cC <= cS){
        for(char c: s){
            if(c >='A' && c<='Z'){
                ans+=c+32;
            }
            else{
                ans+=c;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}