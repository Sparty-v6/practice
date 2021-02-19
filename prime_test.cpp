#include<bits/stdc++.h>
using namespace std;
const int N = 130;
bool primes[N];


// bool isPrime(int n){
//     if (n <= 1) 
//         return false; 
//     if (n <= 3) 
//         return true; 

//     if (n % 2 == 0 || n % 3 == 0) 
//         return false; 
  
//     for (int i = 5; i * i <= n; i = i + 6) 
//         if (n % i == 0 || n % (i + 2) == 0) 
//             return false; 
  
//     return true; 
// }


// int nearPrime(int num){
//     int nextPrime = num + 1;
//     int prevPrime = num - 1;
//     bool gotcha = false;
//     while(!gotcha){
//         if(!isPrime(nextPrime))
//             nextPrime++;
//         if(!isPrime(prevPrime))
//             prevPrime--;
//         if(isPrime(nextPrime) && isPrime(prevPrime))
//             gotcha = true;
//         cout<<"Next Prime: "<<nextPrime<<endl;
//         cout<<"Prev Prime: "<<prevPrime<<endl;
//     }
//     if (num - prevPrime == nextPrime - num)
//         return prevPrime;
//     return nextPrime;
// }

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

int main(){
    //pre computed
    bool isPrime;
    for(int i = 2; i< N; i++){
        isPrime = isPrimeNumber(i);
        if(isPrime == true){
            primes[i] = i;
            // cout<<i<<" ";
        }
    }
    cout<<endl;
    // for(int i = 0; i < N; i++){
    //     cout<<primes[i]<<" ";
    // }

    int n; //enter any number
    cin>>n;
    cout<<primes[n];
    return 0;
}