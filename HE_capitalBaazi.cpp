#include<bits/stdc++.h>
using namespace std;

char toUpper(char s){
    return 'A' + (s - 'a');
}

int main(){
    while(1){
        string s;
        cin>>s;
        if(s.empty()){
            break;
        }
        for(int i =0; i <s.size(); i++){
            s[i] = toUpper(s[i]);
        }
        cout<<s<<endl;
    }

    return 0;
}