#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j] == 1){
                r=i+1;
                c=j+1;
            }
        }
    }
    int shift = abs(r-3) + abs(c-3);

    cout<<shift<<endl;
    return 0;
}