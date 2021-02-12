#include<iostream>
using namespace std;

int main(){
    int arr[5] {1,2,3,4,5};
    int t ; cin>>t;
    while(t--){
        int n;
        cin>>n;

        swap(arr[n],arr[4]);
        for(auto x:arr){
            cout<<x<<" ";
        }cout<<endl;
    }
    return 0;
}