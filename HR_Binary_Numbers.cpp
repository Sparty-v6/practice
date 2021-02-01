#include<bits/stdc++.h>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    fastIO();
    int n, cnt = 0;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(n > 0){
        n = n & (n << 1); // did AND operation with left shift of this number, this will decrease number of 1's and eventually n will become 0.
        cnt++; 
    }
    cout<<cnt;


    return 0;
}