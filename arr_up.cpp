#include<iostream>
#include<algorithm>
using namespace std;

int min(int *a , int n){
    sort(a,a+n);
    return a[0];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        int time = 0;
        // cout<<"Enter the number of elements in array and value of k: \n";
        cin>>n>>k;
        int *a = new int[n];

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        int mIN = min(a,n); //got min element from array

        // increment all values of array till the minimum crosses 'k'

        for(int j =0; j < k-1; j++){
            for(int i = 0; i <n; i++){
                if(mIN < k){
                    a[i] += 1;
                }
            }
            if(mIN >= k){
                time = 0;
            }
            else{
                time++;
            }
        }
        // for(int i =0; i < n; i++){
        //     cout<<a[i] << " ";
        // }

        // cout<<endl;
        // cout<<"Time "<<time;
        cout<<time;
        cout<<endl;
    }
    return 0;
}