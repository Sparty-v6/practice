#include<bits/stdc++.h>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    fastIO();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long result = 0;
        long long power = 1;
        for(int i = s.size()-1; i>= 0; i--){
            int digit = s[i] - '0';
            // cout<<digit;
            result += (digit * power);
            power *= 2;
        }
        cout<<result<<endl;
    }
    return 0;
}