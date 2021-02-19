#include<bits/stdc++.h>
using namespace std;

int nearPrime(int n){
    int next, prev, num;
    prev = next =n;
    int i=2, ctr=1;
    bool run = false;

    while(true){
        if(ctr%2 == 0 && run == true)
        {
            next++;
            num = next;
            i = 2;
            ctr++;
        }
        else if (ctr%2 !=0 && run != false)
        {
            prev--;
            num = prev;
            i = 2;
            ctr++;
        }
        if (num % i == 0 && num == i)
            return num;
        else if (num % i == 0){
            run = true;
            continue;
        }
        run = false;
        i++;
        
    }
}

char magicalWord(char c){
    int res = (int) c; //converted to it's ascii value
    int prime = nearPrime(res); //got nearest prime 
    char ans = (char) prime; //converted that near prime number to ascii charcter
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();

        string s;
        cin >> s;
        for(int i = 0; i <n ; i++){
            cout << magicalWord(s[i]);
        }
        cout<<endl;
    }
    return 0;
}