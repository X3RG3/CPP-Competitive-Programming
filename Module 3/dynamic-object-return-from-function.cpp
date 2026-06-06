#include <bits/stdc++.h>
using namespace std;

class Student{
    public :
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student* fun(){
    Student* karim = new Student(10,5,4.38);
    return karim;
}

int main() {

    Student rahim(111, 6,4.98);

    Student* p = fun();

    cout<< p->roll<< " " <<p->cls << " "<< p->gpa<<endl;
    

    return 0;
}