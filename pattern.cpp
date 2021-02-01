#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n*2; j++){
                // if(i == j-1 && i==((n*2)-1)) cout<<"#";
                if(j >= i+1 && j < (n*2)-i-1) cout<<"#";
                else cout<<"*";
            }
            cout<<endl;
        }
    }
	return 0;
}