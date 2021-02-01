#include<bits/stdc++.h>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    int n,m;
    
    int arr[][3] = {{0,0}};

    string command;
    getline(cin,command);

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0; j< 3; j++){
            cout<<arr[i][j]<<" ";
        }
    }

    // for(int i = 0; i<command.length(); i++){
    //     for(int j = 0; j<n; j++){
    //         for(int k = 0; k<m; k++){
    //             if(arr[k] == "L"){
    //                 arr[i]--;
    //             }
    //         }
    //     }
    // }

    return 0;
}