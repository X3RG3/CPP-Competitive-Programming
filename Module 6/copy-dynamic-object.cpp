#include <bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    string coutnry;
    int jersey;

    Cricketer(string country,int jersey){
        this->coutnry = country;
        this->jersey = jersey;
    }
};
int main() {

    Cricketer* dhoni = new Cricketer("India",200);
    Cricketer* kohli = new Cricketer("India",18);

    *kohli = *dhoni;
    //cout<< dhoni->jersey <<" "<< kohli->jersey <<endl;
    delete dhoni;
    cout<<kohli->coutnry<<" "<<kohli->jersey <<endl;
    return 0;
}