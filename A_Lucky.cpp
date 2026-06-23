#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        stringstream ss(s);
        int fsum,ensum;
        fsum = ensum = 0;
        int cn=0;
       for(char c : s){
        if(cn == 3)break;
        int a = c- '0';
        fsum +=a;
        cn++;
       }
       cn =0;
       reverse(s.begin(),s.end());
       for(char c : s){
        if(cn == 3)break;
        int a = c- '0';
        ensum +=a;
        cn++;
       }

       if(fsum == ensum){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
       
    }
    
    return 0;
}