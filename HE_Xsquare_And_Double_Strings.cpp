#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; cin>>s;
        int hsh[26];
        for(int i = 0; i < 26; i++){
            hsh[i] = 0; 
        }
        for(int i = 0; i < s.length(); i++){
            hsh[s[i] - 'a']++; //incremented the count of characters 
        }
        char c;
        cin>>c;
        cout<<hsh[c - 'a'];   
    }
    return 0;
}

// if even count = Yes
// else No