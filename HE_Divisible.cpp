#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

string intToStr(ll *arr, int n){
    string temp = "";
    for(int i =0; i<n; i++)
        temp.push_back('0'+arr[i]);
    return temp;
}

ll strToInt(string s){
    ll i = 0;
    for (char c: s)
        if (c >= '0' && c <= '9')   i = i * 10 + (c - '0');
    return i;
}

int main(){
    int n;
    cin>>n;
    ll arr[n];
    ll newArr[n];
    
    for(int i =0; i<n ; i++){
        cin>>arr[i];
    } 

    for(int i = 0; i < n/2; i++){ //first half of arrary
        ll digits = log10(arr[i]); //find total no. of digits - 1
        arr[i] = (arr[i] / pow(10,digits)); // and get ur first digit
        newArr[i] = arr[i]; //and store it in new array
        // cout<<newArr[i];
    }

    for(int i = n/2; i < n; i++){ //another half of array
        ll digits = arr[i] % 10; //grab the last digits
        newArr[i] = digits; //store those digits in new array
        // cout<<newArr[i];
    }
    // converted newArr to string so that i could concatenate the numbers together rather to add them up
    string noice = intToStr(newArr,n); //got the number string 
    ll res = strToInt(noice); //converted that string to int now

    if(res % 11 == 0) cout<<"OUI\n";
    else cout<<"NON\n";

    return 0;
}