#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1,2,3,2,5,2};

    replace(v1.begin(),v1.end()-1,2,200);

    auto it = find(v1.begin(),v1.end(),1);

    if(it == v1.end()){
        cout<< " Not found ";
    }
    else{
        cout<<" found ";
    }
    cout<<endl;
    for(int x : v1){
        cout<< x << " ";
    }
    
    return 0;
}