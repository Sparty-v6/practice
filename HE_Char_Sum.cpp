#include<bits/stdc++.h>
using namespace std;

int IdkWhatToName(char c){
    int gettingInt = (int) c;
    int result = gettingInt - 96;
    return result;
}

int main(){
    string s;
    cin>>s;
    int sum = 0;

    for(int i = 0; i < s.size(); i++){
        sum += IdkWhatToName(s[i]);
    }
    cout<<sum;
    return 0;
}