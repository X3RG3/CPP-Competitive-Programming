#include <bits/stdc++.h>
using namespace std;
class Student{
    public :

    char name[100];
    int roll;
    double cgpa;
};
int main() {
    Student a,b;
    // a.roll = 112;
    // a.cgpa = 3.8;
    // char temp[100] = "Ayon";
    // strcpy(a.name,temp);
    cin.getline(a.name,100);
    
    cin>>a.roll>>a.cgpa;
    cin.ignore();

    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;
    cout<< a.name<< " "<<a.roll<<" "<<a.cgpa<<endl;
    cout<< b.name<< " "<<b.roll<<" "<<b.cgpa<<endl;
    return 0;
}