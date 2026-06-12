#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100001];
    while (cin.getline(s,100001)){
        char st[100001];
        int n = strlen(s);
        int k=0;
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                st[k] = s[i];
                k++;
            }
        }
        st[k] = '\0';

        sort(st,st+k);
        cout<<st<<endl;
    }
    return 0;
}