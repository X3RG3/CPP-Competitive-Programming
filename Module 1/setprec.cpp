#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 4.123456;
    cout<<fixed<< setprecision(3)<<a<<endl;
    return 0;
}