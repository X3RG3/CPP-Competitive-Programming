#include <bits/stdc++.h>
using namespace std;

int main() {
    //list<int>l(10,3);
    list<int> l = {1,2,3,4,5};

    

    list<int> l2(l);
    cout<<l.size()<<endl;

    cout<<*l.begin()<<endl;

    for(int val:l){
        cout<< val <<endl;
    }

    l2.clear();
    cout<<l2.size()<<endl;
    cout<<endl;

    if(l2.empty()){
        cout<<"empty"<<endl;
    }

    for(int val: l2){
        cout<<val<<endl;
    }

    return 0;
}