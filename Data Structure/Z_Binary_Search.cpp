#include <bits/stdc++.h>
using namespace std;
int bin_search(int a[],int n,int f){
    int first = 0;
    int last = n-1;
    while(first<=last){
        int mid = first + (last-first)/2;
        if(a[mid] == f){
            return 1;
        }
        else if(a[mid]< f){
            first = mid+1;
        }
        else if(a[mid]> f){
            last = mid-1;
        }
        
    }
    return 0;
}
int main() {
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--){
        int x;
        cin>>x;
        int flag = 0;
        flag = bin_search(a,n,x);
        if(flag){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
    return 0;
}