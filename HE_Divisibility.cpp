#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

string intToStr(int *arr, int n){
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
    int arr[n];
    int newArr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        int digit = arr[i] % 10;
        newArr[i] = digit;
    }
    string gg = intToStr(newArr,n);
    int gj = strToInt(gg);
    // cout<<gj<<endl;
    if(gj % 10 == 0) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}