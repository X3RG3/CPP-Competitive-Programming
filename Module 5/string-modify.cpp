#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = " Hello world";
    string s2 = "Hi";
    s+=s2;
    //s.append(s2);
    cout<<s<<endl;
    //s.push_back('B');
    s+= 'b';
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    return 0;
}