#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin>> a>>b;

    cout<< max(a,b)<<endl;
    cout<< min(a,b)<<endl;
    cout<< max({1,5,2,8,9})<<endl;

    cout<< "Prev : \n";
    cout<< "a : "<< a<<endl;
    cout<< "b : "<< b<<endl;

    swap(a,b);
    cout<< "After : \n";
    cout<< "a : "<< a<<endl;
    cout<< "b : "<< b<<endl;
    return 0;
}