#include<iostream>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    // int n,m;
    // cin>>n>>m;
    int arr[3][3];
    int sumX =0, sumP = 0;

    //allocate the array
    // int** arr = new int*[n];
    // for(int i = 0; i < n; i++)
    // arr[i] = new int[m];

    //input
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(((i+j) % 2 == 0)){ sumX += arr[i][j]; cout<<i<<" "<<j<<endl;}
            // cout<<endl;
            if(!((i+j) % 2 == 0)){ sumP += arr[i][j]; cout<<i<<" "<<j<<endl; }
        }
    }
    cout<<sumX<<endl;
    cout<<sumP<<endl;

    //output
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j<m; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

    //deallocate the array
    // for(int i = 0; i < n; i++)
    //     delete[] arr[i];
    // delete[] arr;

    return 0;
}