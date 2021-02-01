#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll mul = 1; //coz mul exceeds max range of int, it's max range is 10^15 that's why i used long long
        int *arr = new int[n];
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        for(int i =0; i<n; i++){
            mul *= arr[i];
        }
        int LSD = mul % 10;
        // cout<<LSD;
        if(LSD == 2 || LSD ==  3 || LSD ==  5){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}