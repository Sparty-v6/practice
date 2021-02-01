#include<bits/stdc++.h>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    // fastIO();
    int t;
    cin>>t;
    while(t--){
        int n, max = 0;
        cin>>n;
        int *arr = new int[n];

        //- taking input
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        //- Storing the original array in temporary one
        int * tempArr = new int[n];
        for(int k = 0; k< n; k++){
            tempArr[k] = arr[k];
        }

        //- array is being modified here
        for(int i =0; i<n; i++){ 
            if(arr[i] < arr[i+1]){
                arr[i+1] -= 1;
            }
        }

        //- compared the original array values with modified one
        for(int i =0; i<n; i++){ 
            if(tempArr[i] == arr[i]){
                max++;
                // cout<<"Temp: "<<tempArr[i]<<" ";
                // cout<<"Arr: "<<arr[i]<< " ";
            }
        }
        // cout<<endl;
        // for(int i = 0; i<n ;i++){
        //     cout<<arr[i]<<" ";
        // }

        // cout<<"\n";
        cout<<max<<"\n";
        // delete [] arr;
        // delete [] tempArr;
    }

    return 0;
}


