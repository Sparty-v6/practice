#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n; //m-attributes(heading), n-touples(rows)
        cin>>m>>n;
        string attr[m];
        string str,date; int it;
        for(int i = 0; i<m; i++){
            cin>>attr[i];
        }
        for(int i = 0; i < n; i++){
            while(m--){
                cin>>str>>date>>str>>it;
            }
        }
        for(int i = 0; i<m; i++){
            cout<<attr[i]<<" ";
        }
    }

    return 0;
}