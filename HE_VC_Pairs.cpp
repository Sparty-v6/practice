#include<bits/stdc++.h>
using namespace std;

bool isConsonant(char c){
    if((c >=97 && c <= 122) && (c != 'a' && c != 'e' && c!= 'i' && c!= 'o' && c != 'u')) return true;
    else return false;
}
bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    else return false;
}

int main(){
    int t;
    cin>>t;
    string s;
    int n;
    while(t--){
        int count = 0;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>s[i];
        }
        for(int i = 0; i < n; i++){
            if((isConsonant(s[i])) && (isVowel(s[i+1]))){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}