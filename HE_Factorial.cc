#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
long long fact[N];

int main(){
    fact[0] = fact[1] = 1;
    // Pre-computed all factorials till N and used later
    for(int i = 2; i<N; i++){
        fact[i] = fact[i-1] * i;
    }
    int n;
    cin>>n;
    cout<<fact[n];
    return 0;
}