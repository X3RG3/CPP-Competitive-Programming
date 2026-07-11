#include <bits/stdc++.h>
using namespace std;
void fun(int* & p){
    *p = 222;
    cout<<"In fun : "<< &p<<endl;
    cout<<*p <<endl;
}
int main() {
    int x = 10;
    int* p = &x;
    fun(p);
    cout<< "IN Main : "<< &p <<endl;
    cout<<"X : "<<x<<endl;
    cout<<"P in main : "<<*p <<endl;
    return 0;
}