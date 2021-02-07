#include<bits/stdc++.h>
using namespace std;

int IdkWhatToName(char c){
    int gettingInt = (int) c; //stored the ascii value
    int result = gettingInt - 96; //subtracted 96 to get 1 as 'a' and 2 as 'b', 3 as 'c' and so on...
    return result; // and returned that
}

int main(){
    string s;
    cin>>s;
    int sum = 0;

    for(int i = 0; i < s.size(); i++){
        sum += IdkWhatToName(s[i]); // added the result and it will give output like for 'aba' 1 + 2 + 1  = 3
    }
    cout<<sum;
    return 0;
}