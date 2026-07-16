#include <bits/stdc++.h>
using namespace std;
int sum(int a[],int n){
    int s =0;
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    return s;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sm = sum(a,n);
        int flag = 0;
        for(int i=0;i<n;i++){
            if((sm - a[i]) %2 == 0 ){
                flag = 1;
                break;
            }
            
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}