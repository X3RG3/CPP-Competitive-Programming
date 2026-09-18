#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> l = {1,2,3,4,5,6,7,8,9,10};



    cout<< l.back()<<endl;
    cout<< l.front()<<endl;

    cout<< *next(l.begin(),2) <<endl;


    // for(int val:l){
    //     cout<< val <<endl;
    // }

    

    return 0;
}