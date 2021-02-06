#include<bits/stdc++.h>
using namespace std;

int main(){
    int L,H,N,W;
    cin>>L;
    cin>>N;
    while(N--){
        cin>>W>>H;
        if(W < L || H< L) cout<<"UPLOAD ANOTHER\n";
        else if(W == H) cout<<"ACCEPTED\n";
        else cout<<"CROP IT\n";
    }
    return 0;
}