#include <bits/stdc++.h>
using namespace std;

int main() {
  
    list<int> l = {1,2,3,4,5};

    //list<int> l2;

    //l2 = l;

    //l2.assign(l.begin(),l.end());

    // l.pop_back();
    // l.pop_front();
    // l.push_back(40);
    // l.push_front(100);

    cout<<* next(l.begin(),2)<<endl;

    //l.insert(next(l.begin(),2), 100);

    //l.erase(next(l.begin(),3));

    replace(l.begin(),l.end(), 3,5);

    for(int val: l){
        cout<<val<<endl;
    }


    auto it = find(l.begin(),l.end(),7);

    if(it == l.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }

    return 0;
}