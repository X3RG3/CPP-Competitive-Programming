#include <bits/stdc++.h>
using namespace std;

int main() {
    //list<int>l(10,3);
    list<int> l = {1,2,3,4,5,6,7,8,9,10,10,10};

    // l.remove(10);   removes  10  everywhere it gets

    //l.sort(greater<int>());

    //l.unique();   // need to be sorted first

    l.reverse();

    for(int val:l){
        cout<< val <<endl;
    }

    

    return 0;
}