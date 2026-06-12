#include <bits/stdc++.h>
using namespace std;

class Student{
    public :
    int id;
    char name[101];
    char sec;
    int tm;
};

int main() {
    int t;
    cin>>t;
    while(t--){
        Student s[3];
        for(int i=0;i<3;i++){
            cin >> s[i].id >> s[i].name >> s[i].sec >> s[i].tm;

        }
        int best=0;
        for(int i=0;i<3;i++){
            if(s[i].tm > s[best].tm){
                best = i;
            }
            else if(s[i].tm == s[best].tm && s[i].id< s[best].id){
                best = i;
            }
        }
        cout<<s[best].id<<" "<<s[best].name<<" "<<s[best].sec<<" "<<s[best].tm<<endl;
    }
    
    return 0;
}