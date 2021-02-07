#include<bits/stdc++.h>
using namespace std;

char lower(char c){
    return 'a' + (c - 'A');
}
char upeer(char c){
    return 'A' + (c - 'a');
}

int main(){
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] = upeer(s[i]);
        }
        else{
            s[i] = lower(s[i]);
        }
    }
    for(auto &&x:s){
        cout<<x;
    }
    return 0;
}