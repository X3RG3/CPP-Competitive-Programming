#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int cA,cD;
    cA = 0;
    cD = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            cA++;
        }
        else{
            cD++;
        }
    }
    if(cA >cD){
        cout<<"Anton"<<endl;
    }
    else if(cD > cA){
        cout<<"Danik"<<endl;
    }
    else if( cD == cA){
        cout<<"Friendship"<<endl;
    }
    return 0;
}