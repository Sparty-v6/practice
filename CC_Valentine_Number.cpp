#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n /=10;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s;
        cin>>s;
        int sum = sumOfDigits(s);
        if(sum%2 == 0 && n%2 != 0){
            cout<<"committed\n";
        }else cout<<"single\n";

    }
    return 0;
}