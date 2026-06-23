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
    int tot;

};
bool cmp(Student l, Student r){
    if(l.tot > r.tot){
        return true;
    }
    else if(l.tot == r.tot){
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
int main() {
    int n;
    cin>>n;
    Student st[n];
    char sec[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        cin>>st[i].nm>>st[i].cls>>st[i].s>>st[i].id>>st[i].math>>st[i].eng;
        st[i].tot = st[i].math + st[i].eng;
    }

    sort(st,st+n,cmp);
    for(int i=0;i<n;i++){
        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].s<<" "<<st[i].id<<" "<<st[i].math<<" "<<st[i].eng<<endl;
    }
    return 0;
}