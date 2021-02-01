#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin>>n;
    int value;
    for(int i =0; i < n ; i++){
        cin>>value;
        v.push_back(value);
    }
    sort(v.begin(),v.end());

    int min = v[0];
    for(int i =0; i<n; i++){
        if(v[i] < min){
            min = v[i];
        }
    }

    return 0;
}