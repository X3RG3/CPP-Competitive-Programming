#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string  nm;
    int cls;
    char s;
    int id;
    int math;
    int eng;

};
bool cmp(Student l, Student r){
    if(l.eng > r.eng){
        return true;
    }
    else if(l.eng == r.eng){
        if(l.math > r.math){
            return true;
        }
        else if(l.math == r.math){
            if(l.id < r.id){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
int main() {
    int n;
    cin>>n;
    Student st[n];
    char sec[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        cin>>st[i].nm>>st[i].cls>>st[i].s>>st[i].id>>st[i].math>>st[i].eng;
    }

    sort(st,st+n,cmp);
    for(int i=0;i<n;i++){
        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].s<<" "<<st[i].id<<" "<<st[i].math<<" "<<st[i].eng<<endl;
    }
    return 0;
}