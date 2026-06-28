#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1;   // type 1

    vector<int> v2(10); // type 2

    vector<int> v3(10,-1);   // type 3

    cout<<v1.size()<<endl;
    cout<<endl;
    for(int i=0;i<v3.size();i++){
        cout<<v3[i] <<endl;
    }
    cout<<endl;
    vector<int> v4(v3); // type 4

    for(int i=0;i<v3.size();i++){
        cout<<v3[i] <<endl;
    }

    cout<<endl;

    int a[5] = {1,2,3,4};

    vector<int> v5(a,a+4);


    for(int i=0;i<v5.size();i++){
        cout<< v5[i] <<endl;
    }

    vector<int> v6 = {1,2,3,4};
    for(int i=0;i<v6.size();i++){
        cout<<v5[i]<<endl;
    }
    return 0;
}