#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; //from where the lift is called
        cin.ignore();
        char a = 'A', b = 'B';
        if(n >=0 && n <=7){
            if(n > 4){
                cout<<b;
            }
            else if(n < 4){
                cout<<a;
            }
            else{
                cout<<a;
            }
        }
    }
    return 0;
}