#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello Worldddddddddd";

    cout<< s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<< s.capacity()<<endl;
    cout<<s<<endl;
    //s.clear();
    //cout<<s<<endl;
    //cout<<s.size()<<endl;

    if(s.empty() == true){
        cout<<"Empty "<<endl;
    }
    else{
        cout<<"Not Empty "<<endl;
    }

    s.resize(25,'x');
    cout<<s<<endl;

    return 0;
}