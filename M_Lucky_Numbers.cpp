#include <bits/stdc++.h>
using namespace std;
int is_lucky(int i){
    
    while(i>0){
        int dig = i%10;
        if(dig != 4 && dig != 7){
        return 0;
    }
    i/=10;
    }
    return 1;
    
}
int main() {
    int a,b;
    cin>>a>>b;
    int lkcnt = 0;
    for(int i=a;i<=b;i++){
        if(is_lucky(i)){
            cout<<i<<" ";
            lkcnt++;
        }
    }

    if(lkcnt == 0){
        cout<<-1<<endl;
    }
    return 0;
}