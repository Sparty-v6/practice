#include<iostream>
using namespace std;

int main(){
    int n,d; //n = number of integers in array | d = no. of left rotations to do in array
    cin>>n>>d;
    int * a = new int[n];
    for(int i =0; i<n;i++){
        cin>>a[i];
    }
    for(int i = 0; i < d; i++){
        int first = a[0]; //store the first element
        for(int j = 0; j<n ; j++){
            a[j] = a[j+1]; //do left rotation
        }
        a[n-1] = first; //put the first element at last
    }
    for(int i = 0 ; i < n ; i++){
        cout<<a[i] << " ";
    }

    return 0;
}