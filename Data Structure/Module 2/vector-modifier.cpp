#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2;
    v2 = v1;
    for(int i=0;i<v2.size();i++){
        cout<< v2[i] <<" ";
    }

    cout<<endl;

    for(int x : v2){
        cout<<x <<" ";
    }
    vector<int> v3 = {200,300,400};
    v1.insert(v1.begin()+2,v3.begin(),v3.end());

    cout<<endl;
    v1.pop_back();
    for(int x : v1){
        cout<<x <<" ";
    }

    v1.erase(v1.begin()+2);

    cout<<endl;

    for(int x : v1){
        cout<<x <<" ";
    }

    v1.erase(v1.begin()+1,v1.begin()+5);

    cout<<endl;

    for(int x : v1){
        cout<<x <<" ";
    }
    return 0;
}