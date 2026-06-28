#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<< v.size() <<endl;

    v.push_back(50);
    v.clear(); // clears the vector size but still values can be accessed
    cout<< v.max_size() <<endl;  // shows max vector size of the device

    cout<< v.capacity() <<endl; // shows the capacity of the vector
    return 0;
}