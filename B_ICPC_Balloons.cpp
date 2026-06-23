#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        bool seen[26];
        string s;
        cin>>s;
        for(int i=0;i<26;i++){
            seen[i] = false;
        }


        int psum = 0;
        for(char c : s){
            int ind = c - 'A';
            if(!seen[ind]){
                psum+=2;
            }
            else{
                psum+=1;
            }
            seen[ind] = true;
        }

        cout<<psum<<endl;
    }
    return 0;
}