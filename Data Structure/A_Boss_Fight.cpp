#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum =0;
        int freq[1001] = {0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            freq[a[i]]++;
        }
        int maxf = freq[0];
        for(int i=1;i<1001;i++){
            maxf = max(maxf,freq[i]);
        }

        int others = n-maxf;
        
        if(maxf>others+1){
            int val = 0;
            for(int i=1;i<=1000;i++){
                if(freq[i] == maxf){
                    val = i;
                    break;
                }
            }
            int zero_damage = maxf - (others + 2);
            int ans = sum - zero_damage * val;
            cout << ans << endl;

        }
        else{
            cout<<sum<<endl;
        }

    }
    return 0;
}