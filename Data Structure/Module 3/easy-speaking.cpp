#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<s.length();i++){
            
            if(s[i] == 'a' ||  s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
                flag = 0;
                continue;
            }
            else{
                flag++;
                if(flag == 4){
                cout<<"YES"<<endl;
                break;
                }

            }
        }
        if(flag<4){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}