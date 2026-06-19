#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello world";
    string s2 = "Hi";
    //s+=s2;
    s.append(s2);
    cout<<s<<endl;
    //s.push_back('B');
    s+= 'b';
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    string s3 = "Hihello how are you ";
    s = s3;
    cout<<s2<<endl;

    s.erase(3,2);
    cout<<s<<endl;
    s = "Hello world";
    s.replace(6,5,"Bangladesh");
    cout<<s<<endl;
    s.insert(5,"Test ");
    cout<<s<<endl;

    return 0;
}