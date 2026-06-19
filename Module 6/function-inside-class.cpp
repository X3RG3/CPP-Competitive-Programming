#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int math;
    int eng;
    Student(string name,int roll,int math,int eng){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->eng = eng;
    }
    void hello(){
        cout<<"Hello from "<<name<<endl;
    }
    void total(){
        cout<<"Total Marks of "<<name<<endl;
    }
};
int main() {
    Student s1 ("Irfan Ayon",777,95,91);
    cout<<s1.name<<endl;
    s1.hello();
    s1.total();
    cout<<endl;
    Student s2 ("X3RGE",667,90,92);
    cout<<s2.name<<endl;
    s2.hello();
    s2.total();
    return 0;
}