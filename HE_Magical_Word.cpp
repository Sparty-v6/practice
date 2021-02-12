#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i*i<n; i++){
        if(n%i ==0)
            return false;
    }
    return true;
}

int nearPrime(int num){
    int nextPrime = num;
    bool gotcha = false;
    while(!gotcha){
        nextPrime++;
        if(isPrime(nextPrime))
            gotcha = true;
    }
    return nextPrime;
}

string magicalWord(char c){
    int res = (int) c;
    int prime = nearPrime(res);
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        for(int i = 0; i<n; i++){
            cin>>s[i];
        }
        for(int i = 0; i <n ; i++){
            cout<<magicalWord(s[i]);
        }
        cout<<endl;
    }
    return 0;
}