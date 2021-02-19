#include<bits/stdc++.h>
using namespace std;
const int N = 130;
int primes[N];

int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }  
   return isPrime;
}

int nearPrime(int num){
    int nextPrime = num + 1;
    int prevPrime = num - 1;
    bool gotcha = false;
    while(!gotcha){
        if(!isPrimeNumber(nextPrime))
            nextPrime++;
        if(!isPrimeNumber(prevPrime))
            prevPrime--;
        if(isPrimeNumber(nextPrime) && isPrimeNumber(prevPrime))
            gotcha = true;
        cout<<"Next Prime: "<<nextPrime<<endl;
        cout<<"Prev Prime: "<<prevPrime<<endl;
    }
    if (num - prevPrime == nextPrime - num)
        return prevPrime;
    return nextPrime;
}

char magicalWord(char c){
    int res = (int) c; //converted to it's ascii value
    int prime = nearPrime(res); //got nearest prime 
    char ans = (char) prime; //converted that near prime number to ascii charcter
    return ans;
}

int main(){
    bool isPrime;
    for(int i = 2; i< N; i++){
        isPrime = isPrimeNumber(i);
        if(isPrime == true){
            primes[i] = i;
            // cout<<i<<" ";
        }
    }
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