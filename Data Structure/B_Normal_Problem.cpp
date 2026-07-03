#include <bits/stdc++.h>
using namespace std;
void change(string &a){
    for(int i=0;i<a.size();i++){
        if(a[i] == 'q'){
            a[i] = 'p';
        }
        else if(a[i] == 'p'){
            a[i] = 'q';
        }
    }
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string a;
        cin>>a;
        reverse(a.begin(),a.end());
        change(a);

        cout<<a<<endl;
    }
    return 0;
}