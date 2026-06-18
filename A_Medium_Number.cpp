#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int max,min;
        max = a;
        min = a;
        if(a> max){
            max = a;
        }
        else if(b> max){
            max = b;
        }
        else if(c> max){
            max = c;
        }

        if(a< min){
            min = a;
        }
        else if(b< min){
            min = b;
        }
        else if(c< min){
            min = c;
        }

        if( a< max && a>min){
            cout<<a<<endl;
        }
        else if(b<max && b >min){
            cout<<b<<endl;
        }
        else if(c<max && c> min){
            cout<<c<<endl;
        }

    }
    return 0;
}