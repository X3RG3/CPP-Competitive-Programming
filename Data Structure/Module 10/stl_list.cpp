#include <bits/stdc++.h>
using namespace std;

int main() {
    //list<int>l(10,3);
    list<int> l = {1,2,3,4,5};

    //int a[]{10,20,30};
    //list<int> l(a,a+3);


    //vector<int> v = {10,20,30};
    //list<int> l(v.begin(),v.end());

    list<int> l2(l);
    cout<<l.size()<<endl;

    cout<<*l.begin()<<endl;

    for(int val:l){
        cout<< val <<endl;
    }

    cout<<endl;

    for(int val: l2){
        cout<<val<<endl;
    }

    return 0;
}