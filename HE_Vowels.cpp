#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

bool isVowel(char c){
    if(c == 'a' && c == 'e' && c == 'i' && c =='o' && c == 'u') return true;
    else return false;
}
bool isVOWEL(char c){
    if(c == 'A' && c == 'E' && c == 'I' && c =='O' && c == 'U') return true;
    else return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int i = 0;
        while(cin>>s){
                if(isVowel(s[i]) || isVOWEL(s[i]))  cout<<"lovely string\n";
                else cout<<"ugly string\n";
                i++;
            }cout<<endl;
        }
    return 0;
}