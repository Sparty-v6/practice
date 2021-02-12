#include<bits/stdc++.h>
using namespace std;

int main(){

    int f1 = 0;
    int f2 = 7;
    int n; //floor no.
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n-f1 <= (abs)(n-f2)){ //f2 is large
            cout<<"A\n";
            f1 = n; //updated f1 
        }
        else{
            cout<<"B\n";
            f2 = n; //updated f2
        }
    }
    return 0;
}