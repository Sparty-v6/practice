#include<iostream>
using namespace std;

char upper(char s){
    return 'A' + (s-'a');
}
char lower(char s){
    return 'a' + (s - 'A');
}

int main(){
    string s;
    cin>>s;
    int sum = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = lower(s[i]);
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = upper(s[i]);
        }
    }
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            sum -= s[i]; // u can do this too: sum -= (int) s[i] (TYPECASTING), but by default int has higher preference so it will automatically convert the sum into integer
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            sum += s[i];
        }
    }
    if(sum <0){
        sum = sum * -1; //positive bna dia number ko -1 se multiply karke
    }
    int isPrime = 0;
    for(int i = 2; i*i < sum; i++){
        if(sum % 2 == 0){
            isPrime = 1;
        }
    }
    if(isPrime == 0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}