#include <bits/stdc++.h>
using namespace std;

int main() {
    int ce,cg,cy,cp,ct;
    ce = cg = cy= cp=ct = 0;
    string s;
    cin>>s;
    for(char c:s){
        if(c == 'E' || c == 'e'){
            ce++;
        }
        else if(c == 'G' || c == 'g'){
            cg++;
        }
        else if(c == 'Y' || c == 'y'){
            cy++;
        }
        else if(c == 'P' || c == 'p'){
            cp++;
        }
        else if(c == 'T' || c == 't'){
            ct++;
        }
    }

    int rs = min({ce,cg,cy,cp,ct});
    cout<<rs<<endl;
    return 0;
}